#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void check()
{

        int n,k1,k2;
        cin >> n >> k1 >> k2;
        vector<int> a(k1);
        vector<int> b(k2);
        int count=0;
        for(int i=0;i<k1;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<k2;i++)
        {
            cin >> b[i];
        }
        for(int i=0;i<k2;i++)
        {
            for(int j=0;j<k1;j++)
            {
                if(a[j]>b[i])
                {
                    count++;
                    break;
                }
            }
        }
        if(count==k2)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
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