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
        string a;
        cin >> a;
        int count=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='A')
            {
                for(int j=0;j<a.length();j++)
                {
                    if(a[i+j]=='P')
                        count++;
                    else
                    {
                        break;
                    }
                    
                }
            }
        }
        cout << count <<endl;
        return 0;
    }
    return 0;
}