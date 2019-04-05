#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
if((a&1)==0)
printf("LSB is zero");
else
printf("LSB is one");
return 0;
}
