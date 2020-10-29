/*#include<bits/stdc++.h>
using namespace std;

void check()
{
    int a,b;
    cin >> a >> b;
    cout << a+b << endl;
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
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,e,f,g;
    int num=rand()%1000;
    printf("\nHeyy there! which 3 digit number is this?");
    while(a!=num)
    {
        scanf("%d",&a);
        if(a>num)printf("\n\tYour number is too high\n");
        else if(a<num)printf("\n\tYour number is too low\n");
    }
    printf("\n\tCONGRATS! YOU HAVE GUESSED MY NUMBER!\n`");
}