#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int min(int a,int b)
{
    if(a<b)
    return a;
    else
    {
        return b;
    }
    
}

int pairwise(ll a, ll b, ll c)
{
    return abs(a-b)+abs(b-c)+abs(c-a);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        ll ans=pairwise(a,b,c);
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                for(int k=-1;k<=1;k++)
                {
                    ll x=a+i;
                    ll y=b+j;
                    ll z=c+k;
                    ans=min(ans,pairwise(x,y,z));
                }
            }
        }
        cout << ans <<endl;
    }
    
    return 0;
}