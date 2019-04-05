#include<stdio.h>
int Fact(int n);
int Fact(int n)
{
int f=1,i;
while(i!=0)
{
f=f*i;
i--;
}
return f;
}
int main()
{
int Num,Den,i,n;
float sum=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
Num=pow(i,i);
Den=Fact(i);
sum=sum+(float)Num/Den;
}
printf("%d",sum);
return 0;
}
