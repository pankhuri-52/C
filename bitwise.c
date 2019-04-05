#include<stdio.h>
int main()
{
int a;
printf("enter the value of a");
scanf("%d",&a);
if((a&1)==0)
printf("lsb is zero");
else
printf("lsb is one");
return 0;
}
