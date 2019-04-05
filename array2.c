#include<stdio.h>
int main()
{
int i,a[i],n,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&b);
for(i=0;i<n;i++)
{
if(a[i]==b)
printf("present");
break;
}
return 0;
}
