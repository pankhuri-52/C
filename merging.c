#include<stdio.h>
int main()
{
int n1,n2,n3,i;
printf("enter the size of first array");
scanf("%d",&n1);
int arr1[n1];
for(i=0;i<n1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the size of second array");
scanf("%d",&n2);
int arr2[n2];
for(i=0;i<n2;i++)
{
scanf("%d",&arr2[i]);
}
printf("enter the size of third array");
scanf("%d",&n3);
int arr3[n3];
for(i=0;i<n1+n2;i++)
{
printf("%d",arr3[n3]);
}
return 0;
}
