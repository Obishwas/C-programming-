// This program show whether the number is odd or even

#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number :");
	scanf("%d",&num);
	if(num%2==0)/*anynumber divisible by 2 is always even*/
	{ 
	  printf("Given number is Even");
	  
	}
    else if(num%2==1)/*anynumber not divisible by 2 is odd*/
	{
		printf("Given number is Odd");
	}	
	 return(0);
}
