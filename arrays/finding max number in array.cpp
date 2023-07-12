//Write a program to ask user to enter 5 numbers in a array, and find the maximum value in array

#include<stdio.h>

int main()
{
	int A[5];
	
	for(int i=0;i<5;i++)
	{
			scanf("%d", &A[i]);
	}
	int max;
	max=A[0];
	for(int i=0;i<5;i++)
	{
		if(A[i]>max)
		{
		max=A[i];
		}
	}
	printf("%d", max);	
}

