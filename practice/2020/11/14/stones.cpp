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
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
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

struct ftree {
	vl bit;
	void init (vl a) {
		ll n = a.size();
		bit.assign(n, 0);
		f(i,0,n) add(i, a[i], n);
	}
	ll sum(ll r) {
        ll ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }
    ll sum(ll l, ll r) {
        return sum(r) - sum(l - 1);
    }
	void add(ll i, ll x, ll n) {
		for(;i < n; i |= (i + 1)) {
			bit[i] += x;
		}
	}
};

void check() {
	// ftree ft1, ft2;
	ll n;
	cin >> n;
	vl a(n), b(n);
	each(i, a) cin >> i;
	b = a;
	sort(all(b));
	// ft1.init(a), ft2.init(b);
	vl p1(n), p2(n);
	p1[0] = a[0], p2[0] = b[0];
	f(i,1,n) p1[i] = a[i] + p1[i - 1], p2[i] = a[i] + p2[i - 1];
	// spv(p1, n), np("");
	// spv(p2, n), np("");
	ll m;
	cin >> m;
	while(m--) {
		ll op;
		cin >> op;
		if(op == 1) {
			ll l,r;
			cin >> l >> r;
			if(l > 1) np(p1[r - 1] - p1[l - 2]);
			else np(p1[r - 1]);
		}
		else {
			ll l,r;
			cin >> l >> r;
			if(l > 3) np(p2[r - 1] - p2[l - 3]);
			else np(p2[r - 1]);
		}
	}
	return;
}

int32_t main() {
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
