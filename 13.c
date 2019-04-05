#include<stdio.h>
int fun(int x)
{
x=80;
return x;
}
int main()
{
int v,y=50;
v=fun(y);
printf("%d",v);
return 0;
}
