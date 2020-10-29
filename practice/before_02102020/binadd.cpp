#include<bits/stdc++.h>
using namespace std;
void fadd(char a[500], char b[500]){
	int count = 0 , i , j , check;
	int close = 5;  
    while(1){
    	check = 0;
    	for(i=0;i<500;i++){
    		if(b[i]=='1')
    			check=1;
    	}
    	if(check == 0)
    		break;
	    else{
	    	char u[500] , v[1000];
	    	memset(u, '0', sizeof(u));
			memset(v, '0', sizeof(v));
	        // U = A XOR B
	        for(i=0;i<500;i++){
	        	if(a[i]!=b[i])
	        		u[i] = '1';
	        }
	        // V = A AND B
	        for(i=0;i<500;i++){
	        	if(a[i]==b[i])
	        		v[i] = a[i];
	        }
	        // A = U
	        for(i=0;i<500;i++){
        		a[i] = u[i];
	        }
	        // B = V * 2
	        for(i=0;i<500;i++){
        		b[i] = v[i+1];
	        }
        count++;
        }
    }
    cout<<count<<endl;
}
int main(){
	string s1 , s2;
	long int d1 , d2 , res , l1 , l2 , k , n;
	cin>>n;
	while(n--){
		char a[500] , b[500];
		memset(a, '0', sizeof(a));
		memset(b, '0', sizeof(b));
		cin>>s1>>s2;
		l1 = s1.length();
		l2 = s2.length();
		k = 0;
		while(l1--){
			a[500-l1-1] = s1[k];
			k++;
		}
		k = 0;
		while(l2--){
			b[500-l2-1] = s2[k];
			k++;
		}
		// int i = 500;
		// for(i=0;i<500;i++)
		// 	cout<<a[i];
		// cout<<endl;
		// for(i=0;i<500;i++)
		// 	cout<<b[i];
		// cout<<endl;
		fadd(a,b);
	}
	return 0;

}