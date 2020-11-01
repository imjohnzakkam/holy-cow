#include<bits/stdc++.h>
using namespace std;

vector<int> subset;
int n;

void search(int n)
{
    if(n==k)
    {
        
    }
    else
    {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
    return ;
}

int main()
{
    cin >> n;
    search(0);
}