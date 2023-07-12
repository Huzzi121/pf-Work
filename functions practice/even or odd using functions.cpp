#include<stdio.h>
int evenOrOdd(int);

int main()
{
	int n;
	
	printf("enter any number:");
		scanf("%d", &n);
	
	
	
	if(evenOrOdd(n)==1)
	{
		printf("even #");
	}
	
	else
	{
		printf("Odd #");
	}
}
int evenOrOdd(int ch)
{
	int a;
	if(ch%2==0)
	{	
		a=1;
	}
	else
	{	
		a=0;
	}
	
	return a;
}

