#include<stdio.h>
int main()
{
int a,n,k;
printf("enter the value of a");
scanf("%d",&a);
printf("tell the place which u want to toggle");
scanf("%d",&n);
k=((1<<(n-1))^a);
printf("%d",k);
return 0;
}
