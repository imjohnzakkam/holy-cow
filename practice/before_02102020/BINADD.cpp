#include<bits/stdc++.h>
using namespace std;
  
int add(vector<char> a,vector<char> b)
{

    int count=0;
    vector<char> u,v;
  //  while(b>0):
    {
        // u = a^b;
        // v=a&b;
        // a=u;
        // b = v* 2;
        // count++;
    }
   cout << count;
    return count;
}

int main()
{
    vector<char> a,b;
    a.push_back('a');
    //a.push_back('b');
    for(int i=0;;i++)
    cin >> a[i];
    // {
    // char input;
    // cin >> input;
    // a.push_back(input);
    // }
    for(auto i=a.begin();i!=a.end();i++)
    cout << *i << " " ;
    //add(a,b);
    return 0;
}