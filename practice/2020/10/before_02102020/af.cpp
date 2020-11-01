#include<bits/stdc++.h>
#define ll long long int
#define vl vector<ll>
using namespace std;
 
void check()
{
    ll n;
    cin >> n;
    vl a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    ll max=a[0];
    for(int i=0;i<n;i++)
        if(max<a[i])   max=a[i];
    cout << max << " ";
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max)
            cout << a[i] << " ";
    }
    cout << endl;
    return ;
}
 
int main()
{
        check();
    return 0;
}