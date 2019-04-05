#include<stdio.h>
int main()
{
int a,n,k;
printf("enter any number");
scanf("%d",&a);
printf("tell the nth place which is to be unset");
scanf("%d",&n);
k=(~(1<<(n-1)))&a;
printf("%d",k);
return 0;
}
