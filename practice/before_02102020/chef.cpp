#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll x=pow(10,n);
        ll a,b,c,d,e,s;
        cin >> a >> s >> b >> c >> d >> e;
        if((a<x&&(b<x&&(c<x&&(d<x&&e<x))))&&(s==a+b+c+d+e))
        {
            cout << 1 << endl;
            fflush(stdout);
        }
        else
        {
            cout << -1;
            fflush(stdout);
           break;
        }
        
    }
    return 0;
}