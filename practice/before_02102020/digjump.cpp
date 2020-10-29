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
#define vpl vector<pair<ll,ll>>
#define vpc vector<pair<char,char>>
#define adj_list vector<vl> 
#define umap unordered_map<ll, ll>
#define pll pair<ll,pair<ll, ll>>
#define clr(x) memset(x,0,sizeof(x))
#define set(x,k) memset(x,k,sizeof(x))
#define cy cout << "YES" << endl
#define  cn cout << "NO" << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;

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

vl adj[100005];
bool vis[100005];
ll dist[100005];
queue<ll> Q;

void check()
{
	string s;
	cin >> s;
	ll n = s.size();
	memset(vis,0,sizeof(vis));
	memset(adj,0,sizeof(adj));
	memset(dist,0,sizeof(dist));
	for(int i=0;i<n;i++) adj[(s[i]-'0')].push_back(i);
	dist[0] = 0;
	vis[0] = true;
	Q.push(0);
	while(!Q.empty()) {
		ll index = Q.front();
		if(index  == n-1) break;
		Q.pop();		
		ll val = s[index]-'0';
		ll adj_size = adj[val].size();
		for(int i=0;i<adj_size;i++) {
			ll pos = adj[val][i];
			if(!vis[pos]) {
				vis[pos] = true;
				Q.push(pos);
				dist[pos] = dist[index] + 1;				
			}			
		}
		adj[val].clear();
		if(index-1 >= 0 and !vis[index-1]) {
			vis[index-1] = true;
			Q.push(index-1);
			dist[index-1] = dist[index] + 1;
		}
		if(index+1 <= n and !vis[index+1]) {
			vis[index+1] = true;
			Q.push(index+1);
			dist[index+1] = dist[index] + 1;
		}
	}
	cout << dist[n-1] << endl;
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