#include<stdio.h>
int sum(int a,int b);
int main()
{
int n1,n2,total;
scanf("%d %d",&n1,&n2);
total=sum(n1,n2);
printf("%d",total);
}
int sum(int a,int b)
{
int c;
c=a+b;
return c;
}
