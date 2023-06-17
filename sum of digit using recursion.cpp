//5.	Write a program in C to sum the digits of a given number using recursion.
#include<stdio.h>

int sum_digit(int);
int main()
{
	int n;
	
	printf("enter teh number you want sum of:");
		scanf("%d", &n);
		
	sum_digit(n);
	
	printf("%d", sum_digit(n));
}
int sum_digit(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	return n%10 + sum_digit(n/10);
}
