#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll i,n,k,arr[1<<20],secarr[1<<20],sum,ans,cur,low,high,mid,t;

void check()
{
        cin >> n >> k;
        char x;
        ll d;
		for(i=1;i<=n;i++)
        {
            cin >> x;
            if(x=='S')
                d=10;
            if(x=='A')
                d=9;
            if(x=='B')
                d=8;
            if(x=='C')
                d=7;
            if(x=='D')
                d=6;
            if(x=='E')
                d=4;    
			arr[i]=d;
        }
		sort(arr+1,arr+n+1);
		secarr[0]=0;
		for(i=1;i<=n;i++)
			secarr[i]=arr[i]+secarr[i-1];
		ans=1;
		for(i=n;i>=1;i--)
		{
			low=1;
			high=i;
			cur=i;
			while(low<=high)
			{
				mid=(high+low)/2;
				sum=(i-mid+1)*arr[i]-(secarr[i]-secarr[mid-1]);
				if(sum>k)
					low=mid+1;
				else
					high=mid-1,cur=mid;
			}
			ans=max(ans,i-cur+1);
		}
        cout << ans << endl;
    return ;
}

int main()
{
    cin >> t;
    while(t--)
        check();
    return 0;
}
