#include<stdio.h>
int take_sum(int,int);

int main()
{
	int n1,n2;
	
	printf("enter two numbers:");
		scanf("%d %d", &n1, &n2);
		
	int res=take_sum(n1,n2);
	
	printf("your sum of two numbers is :%d", res);
}

int take_sum(int num1,int num2)
{
	int sum=num1+num2;
	return sum;
}
