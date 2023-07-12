#include<stdio.h>

int main()
{
	int n,num;
	
	printf("enter a number you want:");
		scanf("%d", &n);
		
	if(n%2==0)
	{
		num=1;
	}
	else
	{
		num=2;
	}
	
	if(num==1)
	{
		printf("you input an even number");
		
		for(int i=0;i<=n;i+=2)
		{
			printf("\n%d", i);
		}
	}
	else if(num==2)
	{
		printf("you input a odd number");
		for(int i=1;i<=n;i+=2)
		{
			printf("\n%d", i);
		}
	}
}
