//Write a program in C to Print Fibonacci Series using recursion.

#include<stdio.h>
int feb(int );

int main()
{
	int n;
	
	printf("enter the number you want febbonacci upto:");
		scanf("%d", &n);
		
		
	feb(n);
	
	for(int i=1;i<=n;i++)
	{
		printf("%d,", feb(i));
	}
}
int feb(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else 
	return feb(n-1)+feb(n-2);
}
