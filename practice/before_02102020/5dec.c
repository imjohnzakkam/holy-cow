#include<stdio.h>
#define s 100

int check(char ch[s])
{
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!='?'&&ch[i+1]!='\0')
		{
			if(ch[i]==ch[i+1])
			{
				printf("hi\n");
				return -1;
			}
		}
	}
	int count=0;
	int p=0;
	for(int i=0;i<s;i++)
	{
		if(ch[i]=='?')
			count++;
	}
	for(int i=0;i<s;i++)
	{
		if(ch[i]=='?')
		{
			if(i==0)
			{	
				if(ch[i+1]=='a')
				{
					ch[i]='b';
				}
				if(ch[i+1]=='b')
				{
					ch[i]='c';
				}
				if(ch[i]=='c')
				{
					ch[i]='a';
				}
			}
			else
			{
				if(ch[i+1]=='?')
				{
					if(ch[i-1]=='a')
					{
						ch[i]='b';
					}
					if(ch[i+1]=='b')
					{
						ch[i]='c';
					}
					if(ch[i]=='c')
					{
						ch[i]='a';
					}
			
				}
				else
				{
					if(ch[i-1]=='a'&&ch[i+1]!='b')
					{
						ch[i]='b';
					}
					if(ch[i-1]=='a'&&ch[i+1]=='b')
					{
						ch[i]='c';
					}
					if(ch[i-1]=='b'&&ch[i+1]!='c')
					{
						ch[i]='c';
					}
					if(ch[i-1]=='b'&&ch[i+1]!='c')
					{
						ch[i]='a';
					}
					if(ch[i-1]=='c'&&ch[i+1]!='a')
					{
						ch[i]='a';
					}
					
					if(ch[i-1]=='c'&&ch[i+1]=='a')
					{
						ch[i]='b';
					}
					
				}

			}

		}
	}

	// for(int i=0;i<s;i++)
	// {
	// 	if(ch[i]=='?')
	// 	{
	// 			printf("%d hello\n",i);
	// 			return -1;			
	// 	}
	// }
	for(int i=0;i<s;i++)
	{
		printf("%c",ch[i]);
	}
	printf("\n");

	return -1;
}

int main()
{
	int n=5;
	scanf("%d",&n);
	for(int i=0;i<6;i++)
	{
		char ch[s];
		int k;
		for(k=0;ch[k]!='\0';k++)
		{
			scanf("%c",&ch[k]);
		}
		check(ch);
	}
	return 0;
}