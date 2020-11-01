#include<bits/stdc++.h>
int h;
using namespace std;
#define ll long long int 
int main(){
	ll t,n,k,i,check;
	cin>>t;
	while(t--){
		check = 0;
		cin>>n>>k;
		vector<ll>v(n);
		for(i=0;i<n;i++)
			cin>>v[i];
		auto m = v.begin();
		for(i=0;i<n;i++){
			if(k<v[i]){
				m = max_element(v.begin(),v.begin()+i);
				if(v[i]<*m){
					check=1;
					break;
				}
			}
			k-=v[i];
		}
		if(check==1)
			cout<<m-v.begin()+1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}