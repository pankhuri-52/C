#include<stdio.h>
int main()
{
int n,i,small;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
small=a[0];
for(i=0;i<n;i++)
{

    if(small>a[i])
        small=a[i];
}
printf("smallest number is %d",small);
return 0;
}
