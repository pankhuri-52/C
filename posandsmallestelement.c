#include<stdio.h>
int main()
{
int i,n,pos=-1;
scanf("%d",&n);
int a[n],small=a[0];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(small>a[i])
small=a[i];
pos=i;
}
printf("The smallest element is %d",small);
printf("The position of smallest element is %d",pos);
return 0;
}
