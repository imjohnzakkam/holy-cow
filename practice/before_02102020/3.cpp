#include<bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    if(a<b)
    return a;
    else
    {
        return a;
    }
    
}

void gcd(int a, int b)
{
    int m=min(a,b);
   while(m!=0)
   {
       if(a%m==0&&b%m==0)
       {
           cout << m << endl;
           return;
       }
       m--;
   }
   return;
}

int main()
{
    int a,b;
    cin >>a >>b;
    gcd(a,b);
    return 0;
}