#include<stdio.h>
#include<math.h>

int sqrot(int);

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d", sqrot(n));
	
}
int sqrot(int n)
{
	int x=sqrt(n);
	
	return x;
}

