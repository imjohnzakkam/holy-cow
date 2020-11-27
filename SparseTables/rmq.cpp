#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll maxn = 1e6 + 5, k = 27;

ll logs[maxn + 1];

struct sparse_table {
	ll table[maxn][k];

	ll func(ll x, ll y) {
		return min(x, y);
	}

	void precompute() {
		logs[1] = 0;
		for(int i = 2; i <= maxn; i++) logs[i] = logs[i / 2] + 1;
	}

	void init(vector<int> &a) {
		precompute();
		ll n = a.size();
		memset(table, 0, sizeof(table));
		for(int i = 0; i < n; i++) table[i][0] = a[i];
		for(int j = 1; j <= logs[n] + 1; j++)
			for(int i = 0; i + (1 << j) <= n; i++) 
				table[i][j] = func(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
	}

	ll query(ll l, ll r) {
		ll res = 0, j = logs[r - l + 1];
		res = min(table[l][j], table[r - (1 << j) + 1][j]);
		return res;
	}

};

int main() {
	sparse_table st;
	ll n;
	cin >> n;
	vector<int> a(n);
	for(auto &i: a) cin >> i;
	st.init(a);	
	ll q;
	cin >> q;
	while(q--) {
		ll l, r;
		cin >> l >> r;
		cout << st.query(l, r) << "\n";
	}
	return 0;
}