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
#define pll pair<ll, ll>
#define clr(x) memset(x,0,sizeof(x))
#define set(x,k) memset(x,k,sizeof(x))
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

vl findpath (ll start, ll end, vl &p) {
    vl path;
    for(ll v = end;v!=start;v=p[v]) path.push_back(v);
    path.push_back(start);
    reverse(path.begin(),path.end());
    return path;
}

void djikstra (ll v, ll n, vl &dist, vl &parent, vector<pair<ll,ll>> adj[]) {
    priority_queue<pll,vector<pll>,greater<pll>> pq;
    pq.push({0,v});
    dist[v] = 0;
    while(!pq.empty()) {
        pair<ll,ll> s;
        s=pq.top();
        pq.pop();
        for(ll i=0;i<adj[s.second].size();i++) {
            if(dist[adj[s.second][i].first]>dist[s.second]+adj[s.second][i].second) {
                dist[adj[s.second][i].first]=dist[s.second]+adj[s.second][i].second;
                pq.push({dist[adj[s.second][i].first],adj[s.second][i].first});
                parent[adj[s.second][i].first]=s.second;
            }
        }
    }
}

void check()
{
    ll n,m;
    cin >> n >> m;
    vector<pair<ll,ll>> adj[n];
    vl dist, parent;
    for(int i=0;i<m;i++) {
        ll u,v,w;
        cin >> u >> v >> w;
        u--,v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dist.resize(n,LLONG_MAX);
    parent.resize(n,-1);
    djikstra(0,n, dist, parent, adj);
    if(dist[n-1]==LLONG_MAX) cout << -1 << endl;
    else {
        vl d;
        d = findpath(0, n-1, parent);
        for(int i=0;i<d.size();i++) cout << d[i]+1 << sp;
        cout << endl;
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
