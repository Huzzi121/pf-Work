#include<stdio.h>

int main()
{
	char st[30];
	int strlen=30;
	int s1=0,s2=1;
	printf("enter your string:");
	fgets(st, sizeof(st), stdin);
	
	int ind=-1;
	
	for(int i=0;i<strlen;i++)
	{
		if(s1==s2)
		{
			bool match=true;
			for(int j=1;j<strlen;j++)
			{
				if(s1==s2)
				{
					bool match=false;
				}
				else
				{
					return i;
				}
			}
		}
	}
}
