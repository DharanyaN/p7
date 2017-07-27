#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 values");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
  printf("a is greater");
 elseif(b>a&&b>c)
  printf("b is greater");
 elseif(c>a&&c>b)
  printf("c is greater");
  }
