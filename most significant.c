#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
if((a>>31)&1)==0
printf("MSB is zero");
else
printf("MSB is one");
return 0;
}
