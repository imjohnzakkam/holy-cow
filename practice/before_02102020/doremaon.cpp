#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void check()
{
    ll n,m,count=0;
    cin >> n >> m;
    vector<vector<int>> a( n , vector<int> (m, 0));  
    for(auto i=0;i<n;i++)
    {
        for(auto j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(auto i=0;i<n;i++)
    {
        for(auto j=0;j<m;j++)
        {
            
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check();
    }
    return 0;
}