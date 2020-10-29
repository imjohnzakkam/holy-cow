// https://atcoder.jp/contests/dp/tasks/dp_c
#pragma GCC optimize("O3")

#include<bits/stdc++.h>
#define sp " "
#define endl "\n"
#define MAX 10e9
#define MAXN 100001
#define mod 1000000007
#define inf_int 2e9
#define inf_ll 2e18
#define e 1e-9
#define vi vector<int>
#define vl vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpl vector<pair<ll,ll>>
#define vpc vector<pair<char,char>>
#define adj_list vector<vl>
#define umap unordered_map<ll, ll>
#define pll pair<ll,pair<ll, ll>>
#define clr(x) memset(x,0,sizeof(x))
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define google cout << "Case #" << ++it << ": " << ans << endl;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;

ll it = 0, ans = 0;

ll spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (auto i=2; i<MAXN; i++)
  		spf[i] = i;
  	for (auto i=4; i<MAXN; i+=2)
        spf[i] = 2;
    for (auto i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (auto j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
	return;
}

vl getFactorization(ll x)
{
    vl ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


void check()
{
	ll n, ans = 0;
	cin >> n;
	// vl a(n), b(n), c(n);
	// for(int i=0;i<n;i++) cin >> a[i] >> b[i] >> c[i];
	ll dp[n+1][3];
	clr(dp);
	for(int i=0;i<n;i++) {
		vl a(3);
		cin >> a[0] >> a[1] >> a[2];
		for(int j=0;j<3;j++) {
			for(int k=0;k<3;k++) {
				if(j != k) {
					dp[i+1][j] = max(dp[i+1][j], dp[i][k] + a[j]);
				}
			}
		}
	}
	for(int i=0;i<3;i++) ans = max(ans, dp[n][i]);
	cout << ans << endl;
    return ;
}

int32_t main()
{
    fastio
    ll t = 1;
    // cin >> t;
    while(t--)
        check();
    return 0;
}
