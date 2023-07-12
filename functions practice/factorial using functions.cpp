#include<stdio.h>

int cal_fact(int);

int cal_fact(int i)
{
	int f=1;
	int fact=1;
	for(int j=i;j>1;j--)
	{
		fact=j*fact;		
	}
	return fact;
}
int main()
{
	int n;
	
	printf("enter the number you want factorial of :");
		scanf("%d", &n);
		
	int factorial=cal_fact(n);
	
	printf("factorial of %d is %d", n,factorial);
}
