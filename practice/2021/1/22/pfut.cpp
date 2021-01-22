#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;
ll it = 0, ans = 0;

void solve() {
	ll n;
	string a = "",b;
	cin >> n >> b;
	a += '1';
	for(int i = 1; i < n; i++) {
		if('1' + b[i] != a[i - 1] + b[i - 1]) a += '1';
		else a += '0';
	}
	cout << a << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
