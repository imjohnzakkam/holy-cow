#include<bits/stdc++.h>
#define nl endl
#define MAX 10e9
#define inf_int 2e9
#define inf_ll 2e18
#define e 1e-9
#define ll long long int
#define vi vector<vi>
#define vl vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpl vector<pair<ll,ll>>
#define vpc vector<pair<char,char>>
#define vvl vector<vector<ll>,ll>
#define adj_list vector<vi>
#define umap unordered_map<ll, ll>
#define pll pair<ll,pair<ll, ll>>
#define fillall(a,x) fill(a.begin(),a.end(),x)
#define set(x,k) memset(x,k,sizeof(x))
#define clr(x) memset(x,0,sizeof(x))
#define F first
#define S second
ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll gcd(ll a,ll b) { if(a==0) return b; else return gcd(b%a,a);}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
ll fpow(ll a){if(a==0) return 2;ll p=0;while(a%2==0){p++;a/=2;}return p;}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void check()
{
    return ;
}

int32_t main()
{
    fastio;
    ll t;
    cin >> t;
    while(t--)
        check();
    return 0;
}