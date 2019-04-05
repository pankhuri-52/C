#include<stdio.h>
int main()
{
int i,j,n,flag=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j]&&i!=j)
{
flag=1;
printf("Duplicate number is %d at %d and %d",a[i],i,j);
}
}
}
if(flag==0)
printf("No Duplicates\n");
return 0;
}
