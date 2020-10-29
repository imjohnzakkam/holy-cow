// C++ program to count the number of pairs 
// of balanced parentheses 
#include <bits/stdc++.h> 
using namespace std; 

// Function to count the number of pairs 
int countPairs(string bracks[], int num) 
{ 

	// Hashing function to count the 
	// opening and closing brackets 
	unordered_map<int, int> open, close; 

	int cnt = 0; 

	// Traverse for all bracket sequences 
	for (int i = 0; i < num; i++) { 

		// Get the string 
		string s = bracks[i]; 

		int l = s.length(); 

		// Counts the opening and closing required 
		int op = 0, cl = 0; 

		// Traverse in the string 
		for (int j = 0; j < l; j++) { 

			// If it is a opening bracket 
			if (s[j] == '(') 
				op++; 
			else // Closing bracket 
			{ 

				// If openings are there, then close it 
				if (op) 
					op--; 
				else // Else increase count of closing 
					cl++; 
			} 
		} 

		// If requirements of openings 
		// are there and no closing 
		if (op && !cl) 
			open[op]++; 

		// If requirements of closing 
		// are there and no opening 
		if (cl && !op) 
			close[cl]++; 

		// Perfect 
		if (!op && !cl) 
			cnt++; 
	} 

	// Divide by two since two 
	// perfect makes one pair 
	cnt = cnt / 2; 

	// Traverse in the open and find 
	// corresponding minimum 
	for (auto it : open) 
		cnt += min(it.second, close[it.first]); 

	return cnt; 
} 

// Driver Code 
int main() 
{ 
    string bracks[100];
    getchar();
    for(int i=0;i!='\0';i++)
    {
        cin >> bracks[i];
    }
	int num = sizeof(bracks) / sizeof(bracks[0]); 

	int u=countPairs(bracks, num); 
    if(u!=0)
    {
        cout << u;
    }
    else
    {
        cout << "NOT POSSIBLE";
    }
    
} 
