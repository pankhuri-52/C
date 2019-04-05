#include<stdio.h>
int main()
{
int n,d;
printf("enter any two numbers");
scanf("%d %d",&n,&d);
if(d==0)
{printf("the denominator cannot be zero");}
else
{printf("the divison of two numbers is %d",n/d);}
return 0;
}
