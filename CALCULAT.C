#include <stdio.h>
int main()
{
 float a;
 float b;
 char ch;
 printf("enter your number");
 scanf("%f %c %f",&a,&ch,&b);
 switch(ch)
 {
  case '+':
  {
   printf("add=%f",a+b);
   break;
  }
  case '-':
  {
   printf("Sub=%f",a-b);
   break;
  }
  case '*':
  {
   printf("mul=%f",a*b);
   break;
  }
  case '/':
  {
   printf("div=%f",a/b);
   break;
  }
  default:
  {
   printf("invalid number");
  }
 }
 return 0;
}



