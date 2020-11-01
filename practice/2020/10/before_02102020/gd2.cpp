#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void check()
{
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin >>a[i];
        }   
        for(int i=0;i<n;i++)
        {
            ll max=max_element(a.begin(),a.end());
            ll min=min_element(a.begin(),a.end());
            
        }
        cout << "NO" <<endl;
    return;
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