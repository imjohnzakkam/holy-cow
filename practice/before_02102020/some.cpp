#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int32_t main()
{
	ll n;
	cin >> n;
	vector<string> s(n);
	for(int i=0;i<n;i++) cin >> s[i];
	for(int i=0;i<s.size();i++)
	{
		ll ans = 0,flag1 = 0,flag0 = 0;
		for(int j=0;j<s[i].size();j++)
		{
			if(s[i][j]=='1')
			{
				if(flag1 and flag0)
					break;
				flag1 = 1;
			}
			else 
			{
				flag0 = 1;
				if(flag1 and s[i][j]=='0')
					ans++;
			}
		}
		cout << ans << endl;
	} 
	return 0;
}