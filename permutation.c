#include<stdio.h>
int Fact(int n);
int Fact(int n)
{
int f=1;
while(n!=0)
{
f=f*n;
n--;
}
return f;
}
int main()
{
int n,r;
float result;
scanf("%d %d",&n,&r);
result=(float)Fact(n)/Fact(r);
printf("%f",result);
return 0;
}
