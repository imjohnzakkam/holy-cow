#include<bits/stdc++.h>
#define nl endl
#define MAX 10e9
#define MAXN   100001 
#define inf_int 2e9
#define inf_ll 2e18
#define e 1e-9
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpl vector<pair<ll,ll>>
#define vpc vector<pair<char,char>>
#define vvl vector<vector<ll>,ll>
#define adj_list vector<vi>
#define umap unordered_map<ll, ll>
#define pll pair<ll,pair<ll, ll>>
#define clr(x) memset(x,0,sizeof(x))
#define set(x,k) memset(x,k,sizeof(x))
#define f first
#define s second
ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

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
    ll n,ans = 0;
	cin >> n;
	vl a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a.begin(),a.end());
	for(int i=0,j=0;i<n;i++)
		if(++j==a[i])
			ans++,j=0;
	cout << ans << endl;
    return ;
}

int32_t main()
{
    fastio;
    ll t = 1;
    cin >> t;
    while(t--)
        check();
    return 0;
}