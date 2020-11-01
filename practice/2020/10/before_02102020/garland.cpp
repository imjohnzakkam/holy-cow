#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    long long int r,g,b,max;
    scanf(" %d",&t);
    int x;
    for(int i=0;i<t;i++)
    {
        scanf(" %lld",&r);
        scanf(" %lld",&g);
        scanf(" %lld",&b);
        max=r;
        if(g>max)
        max=g;
        if(b>max)
        max=b;
        if((2*max)<=(r+g+b+1))
        printf("Yes\n");
        else if((2*max)>(r+g+b+1))
        printf("No\n");
    }
}


