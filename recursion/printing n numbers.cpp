//Write a program in C to print first n numbers using recursion.
#include<stdio.h>
int print_num(int);
int main()
{
	int n;
	
	printf("enter the numbers you want to print upto:");
		scanf("%d", &n);
		
	print_num(n);
	

}
print_num(int n)
{
	if(n<0)
	{
		return 0;
	}
	else 
	printf("%d\n", n);
	return print_num(n-1);
}
