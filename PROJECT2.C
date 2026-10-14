#include<stdio.h>
int main()
{
 float a;
 float b;
 char ch;
 printf("enter two numbers",a,b);
 printf("enter the operater",ch);
 scanf("%f %c %f",&a,&b,&ch);
 switch(ch)
 {
   case'+':
   {
    printf("add = %f",a+b);
    break;
   }
   case'-':
   {
    printf("sub = %f",a-b);
    break;
   }
   case'*':
   {
    printf("mult = %f",a*b);
    break;
   }
   case'/':
   {
    printf("div = %f",a/b);
    break;
   }
   default:
   {
   printf("invalid operation") ;
   }
 }
  return 0;
  }
