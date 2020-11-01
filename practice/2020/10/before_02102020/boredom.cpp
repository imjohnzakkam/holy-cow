#include<bits/stdc++.h>
#define nl endl
#define MAX 10e9
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

void check()
{
    ll n,ans = 0 ;
	cin >> n;
	vl a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++)
	{
		ll res = 0;
		res+= count(a.begin(),a.end(),a[i]);
		res+= count(a.begin(),a.end(),a[i]-1);
		res+= count(a.begin(),a.end(),a[i]+1);
	}	
	cout << ans << endl;
    return ;
}

int32_t main()
{
    fastio;
    ll t = 1;
    //cin >> t;
    while(t--)
        check();
    return 0;
}