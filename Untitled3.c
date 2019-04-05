#include<stdio.h>
int main()
{
int n,index,value,i;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value of index");
scanf("%d",&index);
printf("enter the number which u have to insert");
scanf("%d",&value);
int a[n];
for(i=0;i<n;i++)
{

    scanf("%d",&a[i]);
}
for(i=n-1;i>=index;i--)
{
a[i+1]=a[i];
}
a[index]=value;
for(i=0;i<n+1;i++)
{

    printf("%d",a[i]);
}
return 0;
}
