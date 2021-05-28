/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, ans = 0, mn = mod, chk = 0;
	cin >> n;
	vector<ll> a(n);
	for(auto &i : a) cin >> i, ans += (i <= 0);	
	for(auto i : a) if(i > 0) mn = min(mn, i);
	sort(all(a));	
	chk = (mn < mod);
	for(int i = 1; i < n; i++) if(a[i] <= 0) chk &= (a[i] - a[i - 1] >= mn);
	if(chk) cout << ans + 1 << endl;
	else cout << ans << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
