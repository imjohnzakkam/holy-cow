#include<bits/stdc++.h>
#define ll long long int
using namespace std;
     
void fun(ll n, ll p, vector<ll> a)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        count++;
        p-=a[i];
        for(int j=i;j<n;j++)
        {
            if(p)
        }
    }
    return;
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ll n,p,k;
        cin >> n >> p >>k;
    vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        fun(n,p,a);
    }
    return 0;
}