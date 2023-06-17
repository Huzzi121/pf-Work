//Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>
int sum_num(int);

int main()
{
	int n;
	
	printf("enter the number you want sum of:");
		scanf("%d", &n);
		
	sum_num(n);
	printf("%d", sum_num(n));
}
int sum_num(int n)
{
	if(n<0)
	{
		return 0;
	}
	else 
	return n+sum_num(n-1);
}
