#include<stdio.h>
int main()
{
int i,n,small_pos=0,large_pos=0,temp,j;
scanf("%d",&n);
int a[n],small=a[0],large=a[0];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {


            temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
}
temp=a[0];
a[0]=a[n-1];
a[n-1]=temp;
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}
