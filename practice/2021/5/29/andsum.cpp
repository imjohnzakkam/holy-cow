/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

ll nCrModpDP(ll n, ll r, ll p)
{
    ll C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = min(i, r); j > 0; j--) 
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

ll ncr(ll n, ll r) {
   if (r==0) return 1; 
   ll ni = n%mod, ri = r%mod;
   return (ncr(n/mod, r/mod) * nCrModpDP(ni, ri, mod)) % mod; 
}

void solve() {
	ll n, k, ans = 1;
	cin >> n >> k;
	ans = ncr(n, 2) % mod;
	ans = ((ans % mod) * (2 % mod)) % mod;
	ans = ((ans) % mod * ((1ll << k) / 2 - 1) % mod) % mod;
	ans = ((ans % mod) + (n % mod)) % mod;
	cout << (ans) % mod << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
