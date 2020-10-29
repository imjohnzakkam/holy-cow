#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,temp,i;
	cin>>n;
	vector<ll>a(n);
	vector<ll>b;
	ll c[n+1] = {0};
	for(i=0;i<n;i++){
		cin>>a[i];
		c[a[i]] = 1;
	}
	for(i=1;i<n+1;i++){
		if(c[i]==0)
			b.push_back(i);
	}
	for(i=0;i<n;i++){
		if(a[i]!=0)
			cout<<a[i]<<" ";
			cout << endl;
		else{
			if(b[b.size()-1]==i+1){
				temp = b[b.size()-1]; 
				b[b.size()-1] = b[b.size()-2];
			 	b[b.size()-2] = temp;
			} 
			a[i] = b.back();
			b.pop_back();
			cout<<a[i]<<" ";
			cout << endl;
		}
	}
	return 0;
    }
