// https://www.codechef.com/COVO2020/problems/SIMPUL
#pragma GCC optimize("O3")

#include<bits/stdc++.h>
#define sp " "
#define endl "\n"
#define MAX 10e9
#define MAXN 100001
#define inf_int 2e9
#define inf_ll 2e18
#define e 1e-9
#define vi vector<int>
#define vl vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pl pair<ll,ll>
#define vpl vector<pair<ll,ll>>
#define vpc vector<pair<char,char>>
#define adj_list vector<vl>
#define umap unordered_map<ll, ll>
#define pll pair<ll,pair<ll, ll>>
#define clr(x) memset(x,0,sizeof(x))
#define set(x,k) memset(x,k,sizeof(x))
#define cy cout << "YES" << endl
#define  cn cout << "NO" << endl
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
    ll n, q;
    cin >> n;
    multiset<pl> mst;
    for(int i=0;i<n;i++) {
        ll x,y;
        cin >> x >> y;
        mst.insert({x,y});
    }
    cin >> q;
    while(q--) {
        ll l, r, h, cnt = 0;
        cin >> l >> r >> h;
        for(int i=l;i<=r;i++) {
            auto it = mst.find({i,h});
            while(it!=mst.end()) {
                mst.erase(*it);
                cnt++;
                it = mst.find({i,h});
            }
        }
        cout << cnt << endl;
    }
    return ;
}

int32_t main()
{
    fastio;
    ll t = 1;
    // cin >> t;
    while(t--)
        check();
    return 0;
}
