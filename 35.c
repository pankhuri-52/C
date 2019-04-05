#include<stdio.h>
void f(int *p,int *q)
{
p=q;
*p=3;
}
int i=0,j=10;
int main()
{
f(&i,&j);
printf("%d %d\n",i,j);
getchar();
return 0;
}
