#include<bits/stdc++.h>
const int N = (int)2e5 + 99;
const int INF = (int)1e5 + 99;
#define ll long long int
using namespace std;

ll nxt[N][26];

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll ans = 0;
		string s,t;
		cin >> s >> t;
		for(int i=0;i<t.length();i++)
			if(count(s.begin(),s.end(),t[i])==0)
				{cout << -1 << endl; return 0;}
		for(int i = 0; i < s.size() + 5; ++i)
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = INF;
		for(int i = int(s.size()) - 1; i >= 0; --i){
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = nxt[i + 1][j];
            nxt[i][s[i] - 'a'] = i;
        }    
        int ans = 1, pos = 0;
        for(int i = 0; i < t.size(); ++i){
            if(pos == s.size()){
                pos = 0;
                ++ans;
            }
            if(nxt[pos][t[i] - 'a'] == INF){
                pos = 0; 
                ++ans;
    		}
    		if(nxt[pos][t[i] - 'a'] == INF && pos == 0){
                ans = INF;
                break;
            }    
            pos = nxt[pos][t[i] - 'a'] + 1;
            
        }   
        if(ans >= INF) cout << -1 << endl;
        else cout << ans << endl;
	}
	return 0;
}