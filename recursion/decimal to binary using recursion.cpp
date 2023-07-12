//Write a program to convert decimal to binary using recursion

#include<stdio.h>

int bin(int);

int main()
{
	int n;
	
	printf("enter a number you want binary of:");
		scanf("%d", &n);
		
	bin(n);
	
	printf("%d", bin(n));
}
int bin(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else 
	return n%2+10*bin(n/2);

}
