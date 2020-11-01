#include<bits/stdc++.h>
using namespace std;

void check()
{
    int s,c1=0,c2=0;
    int w[3];
    cin >> s >> w[0] >> w[1] >> w[2];
    if(c1==0)
    {
        if(s>=w[0])
        {
            if(s>=w[0]+w[1]+w[2])
            {
                c1++;
            }
            else if(s>=w[0]+w[1])
            {
                c1++;
                if(s>=w[2])
                c1++;
            }
            else if(s>=w[0])
            {
                    c1++;
                    if(s>=w[1]+w[2])
                    c1++;
                    else if(s>=w[1])
                    {
                        c1++;
                        if(s>=w[2])
                        c1++;
                    }
            }
        }
        
    }

    if(c2==0)
    {
        if(s>=w[2])
        {
            if(s>=w[0]+w[1]+w[2])
            {
                c2++;
            }
            else if(s>=w[2]+w[1])
            {
                c2++;
                if(s>=w[0])
                c2++;
            }
            else if(s>=w[2])
            {
                    c2++;
                    if(s>=w[0]+w[1])
                    c2++;
                    else if(s>=w[1])
                    {
                        c2++;
                        if(s>=w[0])
                        c2++;
                    }
            }
        }
    }
    if(c1<c2)
    cout << c1 <<endl;
    else
    {
        cout << c2 << endl;
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