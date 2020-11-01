#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,k,l,r;
    int b,c;
    long long int max,min;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        b=-1;
        c=-2;
        scanf("%d",&n);
        long long int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        for(k=0;k<n-1;k++)
        {
            for(l=n-1;l>=k+1;l--)
            {
                max=a[k];
                min=a[k];
                for(int m=k;m<=l;m++)
                {
                    if(a[m]>max)
                    max=a[m];
                    if(a[m]<min)
                    min=a[m];
                }
                if(max-min>=l-k+1)
                {
                b=k+1;
                c=l+1;
                }
            }
        }
        if(b>0)
        printf("YES\n%d %d\n",b,c);
        else
        printf("NO\n");
    }
}