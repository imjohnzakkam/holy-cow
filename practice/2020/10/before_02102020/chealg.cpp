#include<bits/stdc++.h>
using namespace std;

int count =0;

int hash(int i)
{
    return 2*i;
}

void check()
{
    string s;
    cin >> s;
    int l=s.length();
    string p;
    for(int i=0;i<l;i++)
    {
        if(i==0)
        {
            p[0]=s[0];
            p[1]=1;
        }
        else
        {
            if(s[i]==s[i-1])
            {
                p[1]++;
            }
            else
            {
                p[2*i]=s[i];
                p[(2*i)+1]=1;
            }
            
        }
    }
    cout << s;
    cout << p;
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