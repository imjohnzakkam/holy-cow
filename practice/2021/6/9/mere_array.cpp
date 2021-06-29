/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, mn = -1;
	cin >> n;
	vector<ll> a(n), b, c;
	for(auto &i : a) cin >> i;
	mn = *min_element(all(a));
	if(mn == 1) {
		cout << "YES" << endl;
		return;
	}
	b = a;
	sort(all(b));
	for(int i = 0; i < n; i++) {
		if(a[i] != b[i]) {
			if(a[i] % mn != 0 or b[i] % mn != 0) {
				cout << "NO" << endl;
				return;
			}
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
