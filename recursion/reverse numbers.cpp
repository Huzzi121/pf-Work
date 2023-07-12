#include<stdio.h>

void r(int);
int main()
{
	int n;
	
	printf("enter the number u want to reverse:");
		scanf("%d", &n);
	
 r(n);
	
}
void r(int n)
{
	if(n==0)
	{
		return ;
	}
	else
	{
	
	int d=n%10;
	printf("%d", d);
	r(n/10);
	}
	
	
}
