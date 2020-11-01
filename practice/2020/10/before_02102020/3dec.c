#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<10000;j++)
		if(i*a+j*b==c)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}