#include<stdio.h>
char displaystring(char str[]);
int main()
{
	char str[50];
	
	printf("input your string:");
	
	fgets(str, sizeof(str), stdin);
	
	displaystring(str);
	
	return 0;
}

char displaystring(char str[])
{
	printf("string output:%s", str);

	
	
}
