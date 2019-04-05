#include<stdio.h>
int main()
{
int n,i,large;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<n;i++)
{
if(large<a[i])
large=a[i];
}
printf("largest number is %d",large);
return 0;
}
