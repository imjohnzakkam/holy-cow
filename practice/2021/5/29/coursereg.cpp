/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void recursive_func(vector<ll> adj[], ll v, vector<bool> &visited, stack<ll>& st) {
	visited[v] = true;
	for(auto i = adj[v].begin(); i != adj[v].end(); i++) {
		if(visited[*i] == false) {
			recursive_func(adj, *i, visited, st);
		}
	}
	st.push(v);
}

vector<ll> topologicalsort(vector<ll> adj[], ll v) {
	vector<ll> res;
	stack<ll> st;
	vector<bool> visited(v, false);
	for(int i = 0;i < v; i++) {
		if(visited[i] == false) {
			recursive_func(adj, i, visited, st);
		}
	}
	while(st.empty() == false) {
		res.push_back(st.top());
		st.pop();
	}
	res.erase(res.begin());
	return res;
}

void solve() {
	ll n, m;
	cin >> n >> m;
	vector<ll> adj[m];
	for(int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		x--, y--;
		adj[x].push_back(y);
	}
	vector<ll> path = topologicalsort(adj, m);	
	if(path.size() != n) {
		cout << "IMPOSSIBLE" << endl;
		return;
	}
	for(auto i : path) cout << (i + 1) << ' ';
	cout << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
