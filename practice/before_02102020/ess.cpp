#pragma GCC optimize("O3")

#include<bits/stdc++.h>
#define nl "\n"
#define MAX 10e9
#define MAXN 100001 
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
#define adj_list vector<vl> 
#define umap unordered_map<ll, ll>
#define pll pair<ll,pair<ll, ll>>
#define clr(x) memset(x,0,sizeof(x))
#define set(x,k) memset(x,k,sizeof(x))
#define f first
#define s second
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
    ll n, cnt = 0, x = 0, y = 0;
	cin >> n;
	vl a(n);
	for(int i = 0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) {
		if(a[i]%2==0) {
			cnt++, x = i+1;
			break;	
		}
	}
	if(cnt == 0) {
		for(int i=0;i<n and cnt<2;i++) {
			if(a[i]%2!=0 and cnt==0)
				cnt++, x = i+1;
			else if(a[i]%2!=0 and cnt==1)
				cnt++, y = i+1;
		}
		if(cnt==1)
			cnt = 0;
	}
	if(cnt==0)
		cout << -1 << endl;
	else if(cnt==1)
		cout << cnt << endl << x << endl;
	else 	
		cout << cnt << endl << x << " " << y << endl;
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