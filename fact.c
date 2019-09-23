/*C Program to find factorial of a number */
#include<stdio.h>
int fact()
{
  int num,fact=1,i;
  printf("\n\nEnter the num to find factorial\n");
  scanf("%d",&num);
  for(i=num;i>1;i--)
    fact = fact*i;
  printf("\nThe factorial of %d is %d\n",num,fact);
}
