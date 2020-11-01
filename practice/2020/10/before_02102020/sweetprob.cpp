#include<bits/stdc++.h>
using namespace std;

int least(int a, int b)
{
	if(b<=a)
		return b;
	else
		return a;
}

int update(int r,int g,int b)
{
	//int count=0;
	if(r!=0&&g!=0)
	{
		int k=least(r,g);
		r-=k;
		g-=k;
		
	}
	else if(g!=0&&b!=0)
	{
		int k=least(g,b);
		g-=k;
		b-=k;
	}
	else if(r!=0&&b!=0)
	{
		int k=least(r,b);
		r-=k;
		b-=k;
	}
	return 0;
}

int loop(int r,int g,int b)
{
	while((r!=0&&g!=0)||(g!=0&&b!=0)|(r!=0&&b!=0))
	{
		update(r,g,b);
	}
	cout << "hi";
	return 0;
}

int main()
{
	int n;
	cin >> n;
	int r[n],g[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin >> r[i]; 
		cin >> g[i];
		cin >> b[i];
	}
	for(int i=0;i<n;i++)
	cout << r[i] << g[i] << b[i];
//	loop(r[i],g[i],b[i]);
	return 0;
}