// Iterative C program to compute modular power 
#include <bits/stdc++.h> 
using namespace std;
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, unsigned int y, int p) 
{ 
	int res = 1;	 // Initialize result 

	x = x % p; // Update x if it is more than or 
				// equal to p 

	while (y > 0) 
	{ 
		// If y is odd, multiply x with result 
		if (y & 1) 
			res = (res*x) % p; 

		// y must be even now 
		y = y>>1; // y = y/2 
		x = (x*x) % p; 
	} 
	return res; 
} 

// Driver program to test above functions 
int main() 
{ 
    int t;
    cin >> t;
    while(t--)
    {}
long long int x ; 
long long int y ;
cin >> x;
cin >>y; 
const unsigned int p = 1000000007; 
printf("%d", power(x, y, p)); 
}
return 0; 
} 
