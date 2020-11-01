#include<bits/stdc++.h>
using namespace std;

void check()
{
    vector<char> h(10);
    vector<char> p(10);
    // h.resize(100);
    // p.resize(100);
    char x;
    while(x!='\0')
    {
        cin >> x;
        h.push_back(x);
    }
    for(int i=0;i<100;i++)
        cout << h[i];
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check();
    }
    return 0;
}