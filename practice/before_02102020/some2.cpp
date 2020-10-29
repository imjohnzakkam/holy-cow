#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10];
    int r,x,y;
    for(int i=0;i<10;i++)
    {   
        cin >> a[i]; 
    }
    if(a[0]!='-')
    {
     r=a[0]-48;
    if(a[3]=='-')
    {
        x=-(a[4]-48);
    }
    else
    {
        x=a[3]-48;
    }
    
    if(a[6]=='-')
    {
        x=-(a[7]-48);
    }
    else
    {
        x=a[6]-48;
    }
    }
    else
    {
         r=(a[1]-48);
        r=-r;
     
    if(a[4]=='-')
    {
       x=-(a[5]-48);
    }
    else
    {
        x=a[4]-48;
    }
    
    if(a[7]=='-')
    {
        x=-(a[8]-48);
    }
    else
    {
        x=a[7]-48;
    }   
    }
   // cout << r << x << y;
    // cin >> r >> x >> y;
    float m=y/(x*1.0);
    float t=1.0+(m*m);
    float k=(r/sqrt(t));
    // cout << k << k*(m);
    printf("%0.2f %0.2f",k,k*m);
    return 0;
}