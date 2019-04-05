#include<stdio.h>
int main()
{
int a,n,k;
printf("enter the value of a");
scanf("%d",&a);
printf("tell the nth bit");
scanf("%d",&n);
k=((1<<n)|a);
printf("%d",k);
return 0;
}
