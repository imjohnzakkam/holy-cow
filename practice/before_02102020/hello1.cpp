#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void check()
{
        ll m,n;
        cin >>  n >> m;
        vector<string> a(n);
        vector<string> b(m);
        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            a[i]=s;
        }
        for(int i=0;i<m;i++)
        {
            string s;
            cin >> s;
            b[i]=s;
        }
        int q;
        cin >> q;
        cout << endl;
        while(q--)
        {
            ll y;
            cin >> y;
            cout << a[y%n-1] << b[y%m-1] << endl;
        }
}

int main()
{
    check();
    return 0;
}