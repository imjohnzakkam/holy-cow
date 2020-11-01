#include<bits/stdc++.h>
using namespace std;
int h;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		if(n%k==0)
			cout<<n<<endl;
		else{
			ll min = n/k+1;
			ll max = n/k;
			ll f = (n/k + 1)*(k/2);
			ll s = (n/k)*(k-k/2);
			ll ans = f +s;
			if(ans<=n)
				cout<<ans<<endl;
			else
				cout<<n<<endl;
		}
	}
	return 0;
}