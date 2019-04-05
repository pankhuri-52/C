#include<stdio.h>
int main()
{
int n,i,index;
int a[n];
printf("enter the value of n",n);
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value of index",index);
scanf("%d",&index);
for(i=index;i<=n+1;i++)
{
a[i+1]=a[i];
}
for(i=0;i<n-1;i--)
{
printf("%d",a[i]);
}
return 0;
}
