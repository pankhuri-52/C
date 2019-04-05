#include<stdio.h>
int fact(int a);
int fact(int a)
{
int f=1,i;
while(a!=0)
{
f=f*a;
a--;
}
return f;
}
int main()
{
int a,i,e;
float result=0.0;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
e=fact(i);
result=result+1/(float)e;
}

printf("%f",result);
return 0;
}
