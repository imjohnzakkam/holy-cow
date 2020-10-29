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
#define f(iter, start, end) for (int iter = start; iter < end; iter++)
#define fr(iter, start, end) for (int iter = start; iter >= end; iter--)
#define google cout << "Case #" << ++it << ": " << ans << endl;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
typedef long long int ll;
const ll MAXN = 1e5 + 5;
const ll mod = 1e9 + 7;
ll it = 0, ans = 0;

template <typename temp>
void sp(temp x) { cout << x << " "; }
template <typename temp>
void np(temp x) { cout << x << "\n"; }
template <typename Arg1, typename... Args>
void sp(Arg1 arg1, Args ... args) 
{ cout << arg1 << " "; sp(args...);}
template <typename Arg1, typename... Args>
void np(Arg1 arg1, Args ... args)
{ cout << arg1 << "\n"; np(args...);}
template <typename temp>
void spv(temp T, ll n)
{ for (int i = 0; i < n; i++) sp(T[i]);}
template <typename temp>
void npv(temp T, ll n)
{ for (int i = 0; i < n; i++) np(T[i]);}
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

ll spf[MAXN];
void sieve() {
	spf[1] = 1;
	for (auto i = 2; i < MAXN; i++) spf[i] = i;
	for (auto i = 4; i < MAXN; i += 2) spf[i] = 2;
	for (auto i = 3; i * i < MAXN; i++) {
		if (spf[i] == i) {
			for (auto j = i * i; j < MAXN; j += i)
				if (spf[j] == j)
					spf[j] = i;
		}
	}
	return;
}

vl getFactorization(ll x) {
	vl res;
	while (x != 1) {
		res.push_back(spf[x]);
		x = x / spf[x];
	}
	return res;
}

void check() {
	ll n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll ans = 0;
	// 2 ptr method 
	// check the loop conditions 
	for(int i = 0; i < n;) {
		ll j = i + 1;
		while(s[j]!='1' and j < n) j++;
		// it's confirmed that s[j] == '1' here 
		ll l = (s[i] == '1')?k:0;
		// remove the first k zeroes if s[i] == '1'
		ll r = (j < n and s[j] == '1')?k:0;
		// remove the last k zeroes if s[j] == '1'
		// cal length of the zero gap
		ll len = j - i;
		// if first s[i] == '1', reduce lenth by 1
		if(l == k) len--;
		// remove the zeroes left side and right side 
		len -= (l+r);
		// add to ans 
		if(len > 0) ans += (len+k)/(k+1);
		// move the pointer
		i = j;		
	}
	np(ans);
	return;
}

int32_t main() {
	#ifdef test
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastio;
	ll t = 1;
	cin >> t;
	while (t--)
		check();
	return 0;
}
