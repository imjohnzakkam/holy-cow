#include <bits/stdc++.h>
#define IOS                      \
	ios::sync_with_stdio(false); \
	cin.tie(0);                  \
	cout.tie(0)
#define ll long long int
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define pci pair < char, int
#define mii map<int, int>
#define mll map<long long int, long long int>
#define mci map<char, int>
#define umii unordered_map<int, int>
#define umll unordered_map<long long int, long long int>
#define umci unordered_map<char, int>
#define F first
#define S second
#define pb push_back
#define endl '\n'
#define mod 1000000007
using namespace std;
#define maxval 10003000
ll visit[26] = {0};
vector<ll> adj[26];
vector<ll> trans[26];
bool sortinrev(const pair<ll, ll> &a,
			   const pair<ll, ll> &b)
{
	if (a.first != b.first)
		return (a.first > b.first);
	else
		return (a.second < b.second);
}
ll power(ll x, ll n)
{
	ll result = 1;
	while (n > 0)
	{
		if (n % 2 == 1)
			result = (result * x);
		x = (x * x);
		n = n / 2;
	}
	return result;
}
bool isPrime(ll k)
{
	if (k <= 1)
	{
		return false;
	}
	if (k == 2)
	{
		return true;
	}
	if (k % 2 == 0)
	{
		return false;
	}
	ll i = 3;
	while (i * i <= k)
	{
		if (k % i == 0)
		{
			return false;
		}
		i += 2;
	}
	return true;
}
void dfs1(ll u, stack<ll> &s1)
{
	visit[u] = 1;
	for (ll i = 0; i < adj[u].size(); i++)
	{
		if (visit[adj[u][i]] == 0)
		{
			dfs1(adj[u][i], s1);
		}
	}
	s1.push(u);
}
void dfs(ll u)
{
	visit[u] = 1;
	for (ll i = 0; i < trans[u].size(); i++)
	{
		if (visit[trans[u][i]] == 0)
		{
			dfs(trans[u][i]);
		}
	}
	// s1.push(u);
}

int main()
{
	IOS;
	ll t;
	t = 1;
	cin >> t;
	while (t--)
	{

		// adj.clear();
		ll n;
		cin >> n;
		vector<string> a;
		for (ll i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			a.pb(s);
			adj[s[0] - 'a'].pb(s[s.size() - 1] - 'a');
		}
		stack<ll> st;

		memset(visit, 0, sizeof(visit));

		for (ll i = 0; i < n; i++)
		{
			if (visit[a[i][0] - 'a'] == 0)
				dfs1(a[i][0] - 'a', st);
		}
		ll sc = 0;

		for (ll i = 0; i < n; i++)
		{
			string s = a[i];
			trans[s[s.size() - 1] - 'a'].pb(s[0] - 'a');
		}
		memset(visit, 0, sizeof(visit));
		while (!st.empty())
		{
			ll x = st.top();
			st.pop();
			if (visit[x] == 0)
			{
				sc++;
				dfs(x);
			}
		}
		if (sc > 1)
		{
			cout << "0\n";
			continue;
		}
		ll in[26] = {0};
		for (ll i = 0; i < 26; i++)
		{
			if (adj[i].size())
			{
				for (ll j = 0; j < adj[i].size(); j++)
					in[adj[i][j]]++;
			}
		}
		ll ans = 1;
		for (ll j = 0; j < 26; j++)
		{
			if (adj[j].size() == in[j])
				continue;
			else
			{
				ans = 0;
				break;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}