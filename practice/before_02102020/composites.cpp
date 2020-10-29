#include<bits/stdc++.h>
using namespace std;

void comp(int n)
{
    int a=4,b=4;
    while(1)
    {
        if(a-b==n)
        {
            cout << a << b;
            return ;
        }
        a++;
        b++;
    }
    return ;
}

int main()
{
    int n;
    cin >> n;
    comp(n);
    return 0;
}