#include<stdio.h>
int main()
{
int a,b;
printf("enter the values of a and b");
scanf("%d %d",&a,&b);
if(a==b)
{
printf("number is equal");
}
else
{
((a>b)?printf("first is greater"):printf("second is greater"));
}
return 0;
}
