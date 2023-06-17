//Write a program to find the factorial of a number.
#include<stdio.h>

int fact(int);
int main()
{
	int n;
	
	printf("enter the number you want factorial of:");
		scanf("%d", &n);
		
	fact(n);
	
	printf("%d", fact(n));
}
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	return n*fact(n-1);
}

