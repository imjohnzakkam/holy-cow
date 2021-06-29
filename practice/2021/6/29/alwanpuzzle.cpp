/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define endl '\n'
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, res = 0;
	cin >> n;
	vector<ll> a(n), b(n);
	map<pair<ll, ll> ,ll> mp;
	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;
	for(int i = 0; i < n; i++) {
		ll x = a[i], y = b[i];
		if(y > x) swap(x, y);
		mp[{x, y}]++;
	}	
	for(auto i : mp) res = (res % mod + (i.second == 2 ? 2 : 0) % mod) % mod;
	res = max(res, 1ll);
	if(n == 2) res = 1;
	res = ((res % mod) * (2 % mod)) % mod;
	cout << res % mod << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
