/* Whatever happens, never lose motivation */
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long int ll;

const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;

void solve()
{
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	for (int i = 0; i < h; i++)
	{
		cin >> s[i];
	}
	bool found = false;
	for (int r = 0; r < 2; r++)
	{
		bool ok = true;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				char c = ((i + j + r) % 2 == 0 ? 'R' : 'W');
				if (s[i][j] == c)
					ok = false;
			}
		}
		if (ok)
		{
			cout << "YES" << '\n';
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < w; j++)
				{
					char c = ((i + j + r + 1) % 2 == 0 ? 'R' : 'W');
					cout << c;
				}
				cout << '\n';
			}
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "NO" << '\n';
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
