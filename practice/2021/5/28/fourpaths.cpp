#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e3 + 7;

ll mat[maxn][maxn];

void add_edge(vector<ll> adj[], ll src, ll dest) {
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

vector<ll> path1, path2, path3, path4;

bool BFS(vector<ll> adj[], ll src, ll dest, ll v, ll pred[], ll dist[])
{
    list<ll> queue;
    bool visited[v + 1];
    for (int i = 0; i < v + 1; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);
                if (adj[u][i] == dest)
                    return true;
            }
        }
    } 
    return false;
}

vector<ll> cal_shortest_dist(vector<ll> adj[], ll s, ll dest, ll v) {
	vector<ll> path;
    ll pred[v + 1], dist[v + 1];
    if (BFS(adj, s, dest, v, pred, dist) == false) {
        cout << "Given source and destination are not connected\n";
        return path;
    }     
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }
	reverse(all(path));
    return path;
}

void solve() {
	ll m, n, s, x, v;
	cin >> m >> n >> s;
	v = m * n;
	vector<vector<ll>> a(v);
	for(int i = 0; i < v; i++) {		
		for(int j = 0; j < 9; j++) cin >> x, a[i].push_back(x);
	}	
	ll cnt = 1;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			mat[i][j] = cnt++;
		}
	}	
	vector<ll> adj[v + 1];
	ll p = 0, q = 0;
	for(int i = 0; i < v; i++) {		
		p = i / n;
		for(int j = 1; j < 9; j++) {
			if(a[i][j]) {
				if(j == 1) add_edge(adj, i + 1, mat[p - 1][q]);
				else if(j == 2) add_edge(adj, i + 1, mat[p - 1][q + 1]);
				else if(j == 3) add_edge(adj, i + 1, mat[p][q + 1]);
				else if(j == 4) add_edge(adj, i + 1, mat[p + 1][q + 1]);
				else if(j == 5) add_edge(adj, i + 1, mat[p + 1][q]);
				else if(j == 6) add_edge(adj, i + 1, mat[p + 1][q  - 1]);
				else if(j == 7) add_edge(adj, i + 1, mat[p][q - 1]);
				else add_edge(adj, i + 1, mat[p - 1][q - 1]);
			}
		}
		q = (q + 1) % n;		
	}

	ll dest1 = mat[0][0], dest2 = mat[0][n - 1], dest3 = mat[m - 1][0], dest4 = mat[m - 1][n - 1];
	
	path1 = cal_shortest_dist(adj, s, dest1, v);
	path2 = cal_shortest_dist(adj, s, dest2, v);
	path3 = cal_shortest_dist(adj, s, dest3, v);
	path4 = cal_shortest_dist(adj, s, dest4, v);

	for(auto i : path1) cout << i << ' '; cout << endl;
	for(auto i : path2) cout << i << ' '; cout << endl;
	for(auto i : path3) cout << i << ' '; cout << endl;
	for(auto i : path4) cout << i << ' '; cout << endl;

	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;	
	// cin >> t;
	while (t--) solve();
	return 0;
}
