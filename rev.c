#include<stdio.h>
void rev()
{
  int num,rem,n,rev=1;
  printf("\n\nEnter the number to check for alindrome\n");
  scanf("%d",&num);
  n=num;
  while(n!=0)
  {
    rem = n%10;
    rev = rem+(rev*10);
    n = n/10;
  }
  if(rev==num)
    printf("%d is a palindrome",num);
  else
    printf("%d is not a palindrome");
}
