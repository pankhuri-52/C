#include<stdio.h>
int main()
{
 float i,n,sum=0,average;
printf("enter the value of n");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
printf("%f",i);
sum=sum+i;
}
average=sum/n;
printf("%0.1f",(float)average);
return 0;
}
