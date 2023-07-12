#include<stdio.h>
swap_num(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	return a,b;
}

int main()
{
	int n1,n2,nt;
	
	printf("enter two numbers:");
		scanf("%d %d", &n1, &n2);
		
	swap_num(n1,n2);
	printf("%d %d",n1,n2);
	
}

