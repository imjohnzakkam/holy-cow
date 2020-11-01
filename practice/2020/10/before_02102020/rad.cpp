#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a ,count1,count2, b, c ,s,e,r , x , y , count;
	int t;
	cin>>t;
	while(t--){
		count = 0;
		cin>>a>>b>>c>>r;
		x = c - r;
		y = c + r;
		s = min(a,b);
		e = max(a,b);
		count = e - s;
		if(c>s && c>e){
			if(x<e)
				count = count - e + x;
		}
		else if(c<s && c<e){
			if(y>s)
				count = count - y + s;
		}
		else{
			count1 = e - y;
			if(count1>0)
				count = count - r;
			else
				count = count - e + c;
			count2 = x - s;
			if(count2>0)
				count = count - r;
			else
				count = count - c + s;
		}
		if(count>0)
			cout<<count<<endl;
		else
			cout<<0<<endl;

	} 
	return 0;
}