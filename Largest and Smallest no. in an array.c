//Program which shows largest and smallest number of an array

#include<stdio.h>
int main()
{
    int a[5],i,n,large,small;
    printf("Enter total number of elements for an array :\n");
    scanf("%d",&n);

     printf("Enter array of elements :\n");
     for(i=0;i<n;i++)
     {

         scanf("%d",&a[i]);
         large=small=a[0];
     }
     for(i=1;i<n;i++)
     {

         if(a[i]>large)
            large=a[i];
         if(a[i]<small)
            small=a[i];
     }
     printf("The largest number is %d\n",large);
     printf("The smallest number is %d",small);


   return(0);
}

