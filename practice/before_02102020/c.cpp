#include<iostream>
using namespace std;
int ifcomp(int num)
{
    int count=0,i;
        for(i=2;i<num;i++)
        {
                if(num%i==0)
                {
                        count++;
                        break;
                }
        }
        if(count==0)
        {
               // cout<<"\n Prime Number";
                return 0;
        }
        else
        {
                //cout<<" \n Not a Prime Number";
                return 1;
        }        
}

void comp(int n)
{
    int a=6,b=4;
    while(1)
    {
        if(ifcomp(a)==1)
        {
            if(ifcomp(b)==1)
                {
                    if(a-b==n)
                        {
                            cout << a<< b;
                            return ;
                        }
                }
        }
            a++;
            b++;
        
    }
    return ;
}

int main()
{
    int n;
    cin >> n;
    cout << n*9 << " "<< n*8;
    //comp(n);
}