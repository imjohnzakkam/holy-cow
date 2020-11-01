#include<bits/stdc++.h>
#define ll long long int
#define vl vector<ll>
#define mapii map<int,int>
using namespace std;

void check()
{
    ll n;
    cin >> n;
    vl a(n,0);
    mapii suffix{}, prefix{};
    prefix[0]=INT64_MIN;
    suffix[n-1]=INT64_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            if (!i) {
                prefix[i] = INT64_MAX;
            }
            else {
                prefix[i] = prefix[i - 1] & ~a[i - 1];
            }

        }

        for (int j = n - 1; j >= 0; --j) {
            if (j == n - 1) {
                suffix[j] = INT64_MAX;
            }
            else {
                suffix[j] = suffix[j + 1] & ~a[j + 1];
            }
        }


    ll max{},pos{},val{};
    for(int i=0;i<n;i++)
    {
        val=prefix[i]&a[i]&suffix[i];
        if(val>max)
           {
            max=val;
            pos=i;
           }
    }

        cout << a[pos] << " ";
        for (int l = 0; l < n; ++l) {
            if (l == pos) continue;

            cout << a[l] << " ";
        }
    cout << endl;
    return ;
}

int main()
{
        check();
    return 0;
}