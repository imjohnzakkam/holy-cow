/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, x, y, k, ans = 0;
	cin >> n >> x >> y >> k;
	vector<ll> a(n);
	map<ll, ll> mp, val;
	for(int i = 0; i < n; i++) cin >> a[i], mp[a[i]]++;
	for(int i = x; i <= y; i++) val[i] = 1;
	ll cnt = mp.size();
	for(auto i: val) {
		if(mp[i.second] > 0) val.erase(i.first);
	}
	ans = cnt + min(k, min((ll)val.size(), (n - cnt)));
	cout << ans << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
