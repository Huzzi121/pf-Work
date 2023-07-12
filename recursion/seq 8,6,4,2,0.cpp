#include<stdio.h>

int seq(int);

int main()
{
	int n;
	
	printf("enter teh number you want:");
		scanf("%d", &n);
		
	seq(n);
	
	printf("%d", seq(n));	
}

int seq(int n)
{
	
	if(n<=0)
	{
		return 0;
	}
	return n+seq(n-2);
}
