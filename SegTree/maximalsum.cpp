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

struct item {
	ll seg, pref, suf, sum;
};

struct segtree {
	ll size;
	vector<item> values;

    item NEUTRAL_ELEMENT = {0, 0, 0, 0};

	void init (ll n) {
		size = 1;
		while(size < n) size*=2;
		values.resize(2*size);
	}

	item single (ll v) {
		if(v > 0) {
            return {v, v, v, v};
        }
        else {
            return {0, 0, 0, v};
        }
	}

	item merge (item a, item b) {
        return {
            max(a.seg, max(b.seg, a.suf + b.pref)),
            max(a.pref, a.sum + b.pref),
            max(b.suf, b.sum + a.suf),
            a.sum + b.sum
        };
	}

	void build (vl &a, ll x, ll lx, ll rx) {

		if(rx-lx==1) {
			if(lx < a.size()) {
				values[x] = single(a[lx]);
			}
			return;
		}
		ll m = (lx+rx)/2;
		build(a, 2*x+1, lx, m);
		build(a, 2*x+2, m, rx);
		values[x] = merge(values[2*x+1],  values[2*x+2]);
	}

	void build(vl &a) {
		build(a, 0, 0, size);
	}

	void set (ll i, ll v, ll x, ll lx, ll rx) {
		if(rx - lx == 1) {
			values[x] = single(v);
			return;
		}
		ll m = (lx + rx)/2;
		if(i<m) {
			set(i, v, 2*x+1, lx, m);
		}
		else {
			set(i, v, 2*x+2, m, rx);
		}
		values[x] = merge(values[2*x+1], values[2*x+2]);
	}

	void set (ll i, ll v) {
		set(i, v, 0, 0, size);
	}

	item calc (ll l, ll r, ll x, ll lx, ll rx) {
		if(lx>=r or l>=rx) return NEUTRAL_ELEMENT;
		if(lx>=l and rx<=r) return values[x];
		ll m = (lx+rx)/2;
		return merge(calc(l,r,2*x+1,lx,m), calc(l,r,2*x+2,m,rx));
	}

	item calc (ll l, ll r) {
		return calc(l,r,0,0,size);
	}
};

void check()
{
	ll n,m;
	cin >> n >> m;
	segtree st;
	st.init(n);
	vl a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	st.build(a);
    cout << st.calc(0, n).seg << endl;
	while(m--) {
		ll i, v;
        cin >> i >>  v;
        st.set(i, v);
        cout << st.calc(0, n).seg << endl;
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
