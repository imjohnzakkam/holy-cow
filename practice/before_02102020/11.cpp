#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--)
    {
    long long n,m;
    int c;
    cin>>c;
    cin>>n>>m;
    char x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x=='S')
            a[i]=10;
        else if(x=='A')
            a[i]=9;
        else if(x=='B')
            a[i]=8;
        else if(x=='C')
            a[i]=7;
        else if(x=='D')
            a[i]=6;
        else if(x=='E')
            a[i]=4;
    }
    sort(a,a+n);
    for(int j=n-2;j>=0;j--)
    {
        if(a[n-1]-a[j]<=m )
        {
            m-=a[n-1]-a[j];
            a[j]+=a[n-1]-a[j];
        }
    }
    cout<<count(a,a+n,a[n-1]);
    }
    return 0;
}
