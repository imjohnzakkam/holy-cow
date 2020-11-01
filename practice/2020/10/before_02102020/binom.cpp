#include<bits/stdc++.h>
using namespace std;

int fact(long long int n)
{
    
    long long factorial = 1;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    // cout << factorial;    
     return factorial;
}

long long fast_power(long long base, long long mod) {
  

    int result =base%mod;
    
    return result;
}

int main()
{
    long long int h;
    int m;
    cin >> h >> m;
    int p=fact(h);
    int q=fact(h-1);
    int r=p/q;
    cout << fast_power(r,m);
    return 0;
}