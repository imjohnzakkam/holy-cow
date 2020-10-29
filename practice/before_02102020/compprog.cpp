// // C++ program to print all permutations with 
// // duplicates allowed using rotate() in STL 
// #include <bits/stdc++.h> 
// using namespace std; 

// // Function to print permutations of string str, 
// // out is used to store permutations one by one 
// void permute(string str, string out) 
// { 
// 	// When size of str becomes 0, out has a 
// 	// permutation (length of out is n) 
// 	if (str.size() == 0) 
// 	{ 
// 		cout << out << endl; 
// 		return; 
// 	} 

// 	// One be one move all characters at 
// 	// the beginning of out (or result) 
// 	for (int i = 0; i < str.size(); i++) 
// 	{ 
// 		// Remove first character from str and 
// 		// add it to out 
// 		permute(str.substr(1), out + str[0]); 

// 		// Rotate string in a way second character 
// 		// moves to the beginning. 
// 		rotate(str.begin(), str.begin() + 1, str.end()); 
// 	} 
// } 

// // Driver code 
// int main() 
// { 
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         int k = "AB"; 
// 	    permute(str, "");     
//     }
// 	return 0; 
// } 






// Program to generate all cyclic permutations 
// of number 
#include <bits/stdc++.h> 
using namespace std; 

// Function to count the total number of digits 
// in a number. 
int countdigits(int N) 
{ 
	int count = 0; 
	while (N) { 
		count++; 
		N = N / 10; 
	} 
	return count; 
} 

// Function to generate all cyclic permutations 
// of a number 
void cyclic(int N) 
{ 
	int num = N; 
	int n = countdigits(N); 

	while (1) { 
		// cout << num << endl; 
        if(num%60==0)
        {
            cout << "red";
            return ;
        }
        // Following three lines generates a 
		// circular pirmutation of a number. 
		int rem = num % 10; 
		int div = num / 10; 
		num = (pow(10, n - 1)) * rem + div; 

		// If all the permutations are checked 
		// and we obtain original number exit 
		// from loop. 
		if (num == N) 
			break;		 
	} 
    cout << "cyan";
} 

// Driver Program 
int main() 
{ 
	int N; 
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int n;
        cin >> n;
	    cyclic(n);
    } 
	return 0; 
} 
