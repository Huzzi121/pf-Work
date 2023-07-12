#include<stdio.h>
int f1();
int f2();
int f3();
int main()
{
	printf("start\n");
	f1();
	printf("end\n");
}
int f1()
{
	printf("1\n");
	f2();
	printf("f1 end\n");
}
int f2()
{
	printf("2\n");
	f3();
	printf("f2 end\n");
	
}
int f3()
{
	printf("f3 start and end\n");
}
