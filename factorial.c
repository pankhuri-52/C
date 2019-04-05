#include<stdio.h>
int main()
{
int n,i,c=1;
printf("enter the value of n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
c=c*i;
}
printf("%d",c);
return 0;
}
