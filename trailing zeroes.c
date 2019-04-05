#include<stdio.h>
int main()
{
int a,count=0;
printf("enter the value of a");
scanf("%d",&a);
while(a!=0)
{
if((a&1)==1)
{
break;
}
else
{
count++;
a=a>>1;
}
}
printf("%d",count);
return 0;
}
