#include<bits/stdc++.h>
using namespace std;

int count1=0;
int count2=0;

int max_length(int n. int a[n])
{
     //without removing 1
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<a[j+1])
                count1++;
            if(i!=0)
            {
                if(count1<count)
            }
        }
    }
    return 0;
}

int main()
{
    cin >> n;
    int a[i];
    for(int i=0;i<n;i++)
        cin >> a[i];
    max_length(n,a);
    return 0;
}