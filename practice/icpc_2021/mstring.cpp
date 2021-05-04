/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	ll n = s.size(), ans = 0;
	vector<string> a;
	for(int i = 0;i < n; i++) {
		for(int j = 1; j <= n - i; j++) {
			string x = s.substr(i, j);
			reverse(all(x));
			a.push_back(x);
		}
	}
	for(string i : a) {
		if(s.find(i) == string::npos) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
