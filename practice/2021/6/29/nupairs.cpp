/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, l , r, res = 0;
	cin >> n >> l >> r;
	vector<ll> a(n);
	for(auto &i : a) cin >> i;
	sort(all(a));
	for(auto i : a) {
		res += upper_bound(all(a), r - i) - a.begin();
		res -= lower_bound(all(a), l - i) - a.begin();
		if(l <= 2 * i and 2 * i <= r) res--;
	}
	cout << res / 2 << '\n';
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
