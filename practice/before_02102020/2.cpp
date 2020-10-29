#include<bits/stdc++.h>
using namespace std;

void check()
{
    int n;
    cin >> n;
    int x[n][n];
    int y[n][n];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
        {
            x[i][j]=j;
            y[i][j]=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a=abs(x[i][j]-x[i+1][j+1]);
            int b=abs(y[i][j]-y[i+1][j+1]);
            if(a+b>=n)
            {
                cout << 
            }
        }
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