#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number :");
	scanf("%d",&num);
	if(num%2==0)
	{ 
	  printf("Given number is Even");
	  
	}
    else if(num%2==1)
	{
		printf("Given number is Odd");
	}	
	 return(0);
}
