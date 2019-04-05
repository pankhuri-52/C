#include<stdio.h>
int greater(int a,int b,int c);
int greater(int a,int b,int c)
{
int d;
d=((a>b?a:b)?(a>c?a:c):(b>c?b:c));
return d;
}
int main()
{
int a,b,c,e;
scanf("%d %d %d",&a,&b,&c);
e=greater(a,b,c);
printf("%d",e);
return 0;
}
