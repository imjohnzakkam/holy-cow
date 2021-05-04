/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll m, n, k, ans = 0;
	cin >> m >> n >> k;
	char a[m][n];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];			
		}
	}
	ll empty = 0, init = 0;
	for(int i = 0; i < m; i++) if(a[i][0] == '.') empty++;
	init = m - empty;
	if(empty >= k) ans = (init + k) * n;
	else {
		ll extra = (k - empty);
		if(extra & 1) ans = (m - 1) * n;
		else ans = m * n;
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
