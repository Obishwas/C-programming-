#include<stdio.h>
int main()
{
char name[50][50];
int i;
printf("Enter three names :-\n");

for(i=0;i<3;i++)
{
  scanf("%s",name[i]);

}

printf("\nThe names you have entered are :\n");

for(i=0;i<3;i++)
{
  printf("%d\t",i+1);
  printf("%s\n",name[i]);
}

return(0);
}
