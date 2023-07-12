//Write a program to ask user to enter 5 numbers in an array, and find the second largest value in array.

#include<stdio.h>

int main()
{
	int A[5];
	
	for(int i=0;i<5;i++)
	{
		scanf("%d", &A[i]);
	}
	int max;
	max=A[1];
	
	for(int i=1;i<5-1;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
		
	}
	printf("%d", max);
}
