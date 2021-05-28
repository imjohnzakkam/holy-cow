/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, x = mod, pos = -1;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] < x) x = a[i], pos = i;
	}
	cout << n - 1 << endl;
	for(int i = 0; i < n; i++) {
		if(i != pos) {
			cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(pos - i) << endl;
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
