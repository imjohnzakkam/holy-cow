/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve() {
	ll n, m;	
	string s;
	cin >> n >> m >> s;
	for(int i = 1; i <= min(m, n); i++) {
		string x = s;
		for(int j = 0; j < n; j++) {
			ll one = 0;
			if(j > 0 and s[j - 1] == '1') one ++;
			if(j < n - 1 and s[j + 1] == '1') one++;
			if(one == 1) x[j] = '1';
		}
		swap(x, s);
	}
	cout << s << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
