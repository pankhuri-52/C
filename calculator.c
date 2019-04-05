#include<stdio.h>
int main()
{
float a,b;
char d;
printf("enter an operator");
scanf("%c",&d);
switch(d)
{
case '+':
printf("enter number",a,b);
scanf("%f %f",&a,&b);
printf("addition is %f",a+b);
break;
case '-':
printf("enter number",a,b);
scanf("%f %f",&a,&b);
printf("subtraction is %f",a-b);
break;
case '*':
printf("enter number",a,b);
scanf("%f %f",&a,&b);
printf("multiplication is %f",a*b);
break;
case '/':
printf("enter number",a,b);
scanf("%f %f",&a,&b);
printf("division is %f",a/b);
break;
default:
printf("default");
break;
}
return 0;
}
