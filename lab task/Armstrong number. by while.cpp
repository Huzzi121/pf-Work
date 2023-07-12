#include<stdio.h>
#include<math.h>
int main()
{
	int num,exponent,i=1;
	
	
	while(i<=exponent)
	{
		
	 printf("\n enter a 3 digit number or press (-1) for exit: ");
	 scanf("%d",&num);
	
	if(num==-1)
	{
	  printf("\n you pressed the exit button due to which the program does not proceed further");
	  break;	
	}	
	
	printf("\n enter an exponent : ");
	 scanf("\n %d",&exponent);
		
		//display armtrong number from 100-500
        
        printf("the armstrong number from 100-500 are : ");
		int n=100;
		while(n<=500)
	{
			
		int first_digit = (num / 100);
		printf("\n %d ",first_digit);
		int second_digit = (num / 10 )%10;
		printf("\n %d ",second_digit);
		
		int third_digit = (num % 10);
	    printf("\n %d ",third_digit);
	    
	    int result_1 = pow(first_digit,exponent);
	    
	    int result_2 = pow(second_digit,exponent);
	    
	    int result_3 = pow(third_digit,exponent);
	    
	    int sum=0;
	    sum =  result_1 + result_2 + result_3;
	    
	    if(sum==num)
	    {
	    	printf("\n the %d entered by user is armstrong",num);
		}
		
		else
		{
		    printf("\n the %d entered by user is not armstrong",num);	
		}
       int n=100;
		while(n<=500)
    printf("\n %d",n);
	n++;
	}
}
	return 0;
}