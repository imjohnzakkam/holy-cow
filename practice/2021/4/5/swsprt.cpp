/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<ll> b = a;
	sort(all(b));
	ll cnt = 0;
	for(int i = 1; i < n; i++) {
		if(a[i] < a[i - 1]) cnt++;
	}
	cout << cnt << endl;
	if(cnt == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
