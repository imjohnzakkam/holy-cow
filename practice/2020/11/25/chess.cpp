#pragma GCC optimize("O3")

#include <bits/stdc++.h>
#define e 1e-9
// #define test 1
#define all(x) (x).begin(), (x).end()
#define each(x, a) for (auto &x : a)
#define vl vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpl vector<pair<ll, ll>>
#define vpc vector<pair<char, char>>
#define adj_list vector<vl>
#define umap unordered_map<ll, ll>
#define pll pair<ll, pair<ll, ll>>
#define clr(x) memset(x, 0, sizeof(x))
#define mset(x, k, y) memset(x, k, y * sizeof(x))
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define google cout << "Case #" << ++it << ": " << ans << endl;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
typedef long long int ll;
const ll maxn = 1e5 + 7;
const ll mod = 1e9 + 7;
ll it = 0, ans = 0;

template <typename temp>
void sp(temp x) { cout << x << " "; }
template <typename temp>
void np(temp x) { cout << x << "\n"; }
template <typename Arg1, typename... Args>
void sp(Arg1 arg1, Args... args)
{
	cout << arg1 << " ";
	sp(args...);
}
template <typename Arg1, typename... Args>
void np(Arg1 arg1, Args... args)
{
	cout << arg1 << "\n";
	np(args...);
}
template <typename temp>
void spv(temp T, ll n)
{
	for (int i = 0; i < n; i++)
		sp(T[i]);
}
template <typename temp>
void npv(temp T, ll n)
{
	for (int i = 0; i < n; i++)
		np(T[i]);
}
template <typename T>
T modpow(T base, T exp, T modulus)
{
	base %= modulus;
	T result = 1;
	while (exp > 0)
	{
		if (exp & 1)
			result = (result * base) % modulus;
		base = (base * base) % modulus;
		exp >>= 1;
	}
	return result;
}
template <typename T>
T modinv(T base, T exp) { return modpow(base, exp - 2, exp); }

ll spf[maxn];
void sieve()
{
	spf[1] = 1;
	for (auto i = 2; i < maxn; i++)
		spf[i] = i;
	for (auto i = 4; i < maxn; i += 2)
		spf[i] = 2;
	for (auto i = 3; i * i < maxn; i++)
	{
		if (spf[i] == i)
		{
			for (auto j = i * i; j < maxn; j += i)
				if (spf[j] == j)
					spf[j] = i;
		}
	}
	return;
}

vl getFactorization(ll x)
{
	vl res;
	while (x != 1)
	{
		res.push_back(spf[x]);
		x = x / spf[x];
	}
	return res;
}

const ll num = 51;
char one[num][num + 2], two[num * 2 + 1][num * 2 + 1];

void check()
{
	ll n;
	cin >> n;
	f(i, 0, n)
	{
		f(j, 0, n)
		{
			cin >> one[i][j];
		}
	}
	f(i, 0, 2 * n - 1) memset(two[i], 'x', (2 * n - 1) * sizeof * two[i]);
	two[n - 1][n - 1] = 'o';
	f(i, 0, n)
	{
		f(j, 0, n)
		{
			if (one[i][j] == '.')
			{
				f(k, 0, n)
				{
					f(l, 0, n)
					{
						if (one[k][l] == 'o')
						{
							two[i - k + n - 1][j - l + n - 1] = '.';
						}
					}
				}
			}
		}
	}
	f(i, 0, n)
	{
		f(j, 0, n)
		{
			if (one[i][j] == 'o')
			{
				f(k, 0, 2 * n - 1)
				{
					f(l, 0, 2 * n - 1)
					{
						if (i + k - n + 1 >= 0 and i + k - n + 1 < n)
						{
							if (j + l - n + 1 >= 0 and j + l - n + 1 < n)
							{
								if (two[k][l] == 'x' and one[i + k - n + 1][j + l - n + 1] != 'o')
								{
									one[i + k - n + 1][j + l - n + 1] = '.';
								}
							}
						}
					}
				}
			}
		}
	}
	f(i, 0, n)
	{
		f(j, 0, n)
		{
			if (one[i][j] == 'x')
			{
				np("NO");
				return;
			}
		}
	}
	np("YES");
	f(i, 0, 2 * n - 1) np(two[i]);
	return;
}

int32_t main()
{
#ifdef test
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio;
	ll t = 1;
	// cin >> t;
	while (t--)
		check();
	return 0;
}
