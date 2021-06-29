/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, m, res = 0;
	cin >> n >> m;
	vector<ll> a(n);
	for(auto &i : a) cin >> i;
	set<ll> x, y;
	for(int i = 0, j; i < m; i++) cin >> j, x.insert(j);
	for(int i = 0, j; i < m; i++) cin >> j, y.insert(j);
	for(int i = 0; i < n; i++) {
		if(x.find(a[i]) != x.end()) res++;
		else if(y.find(a[i]) != y.end()) res--;	
	}
	cout << res << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}
