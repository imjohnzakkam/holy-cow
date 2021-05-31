/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, ans = 0;
	cin >> n;
	vector<ll> a(n);
	for(auto &i : a) cin >> i;
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if((a[i] | a[j]) <= max(a[i], a[j])) ans++;
		}
	}
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
