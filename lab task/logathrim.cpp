#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,multi,termby;
	printf("INPUT THE NUMBER : ");
	scanf("%d",&x);
	printf("Enter the number of terms: ");
	scanf("%d", &term);
	
	float sum=0;
	
	for (i = 2; i <= term ; i++) {
        
        multi *= multi*(1/2)*(x-1/x);
        sum += multi;
        
    }

    printf("Sum of the series = %f", sum);

    return 0;

}
