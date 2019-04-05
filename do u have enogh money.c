#include<stdio.h>
int main()
{
float n,i,t,a,sum=0,c=0,b;
scanf("%f",&t);
for(i=0;i<t;i++)
{
scanf("%f",&n);
scanf("%f",&a);
while(a!=-1)
{
sum=sum+a;
c=sum*0.08;
sum=sum+c;
scanf("%f",&a);
}
b=n-sum;
printf("$%0.2f",b);
if(n>b)
printf("ENOUGH MONEY");
else
printf("SHORT");
return 0;
}
}
