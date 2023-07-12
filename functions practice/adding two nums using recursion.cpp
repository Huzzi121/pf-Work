#include<stdio.h>
int add2(int, int);
int add(int a,int b)
{
	int res;
	
	res= add2(a,b);
	return res;
}
int main()
{
	int n1,n2;
	
	printf("enter two values:");
		scanf("%d %d", &n1,&n2);
		
	int res=add(n1,n2);
	printf("the result is :%d", res);
}
int add2(int n1,int n2)
{
	int res=n1+n2;
	
	return res;
}
