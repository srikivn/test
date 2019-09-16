#include<stdio.h>
void big3()
{
  int a,b,c;
  printf("\n\nEnter the three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if( a>b && a>c )
    printf("%d is greater",a);
  else if ( b>a && b>c )
    printf("%d is greater",b);
  else
    printf("%d is greater",c);
 }
