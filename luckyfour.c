#include<stdio.h>
int main()
{
int n,r,count=0,i,t;
scanf("%d",&t);
for(i=0;i<=t;i++)
{
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if(r==4)
{
    count++;
}
n=n/10;
}
printf("%d",count);
}
return 0;
}
