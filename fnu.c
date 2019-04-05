#include<stdio.h>
int *print()
{
static int a[5]={1,2,3,4,5};
return a;
}
int main()
{
int *ptr,i,n;
ptr=print();
for(i=0;i<n;i++)
printf("%d",*(ptr+i));
return 0;
}
