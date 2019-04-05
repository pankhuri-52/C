#include<stdio.h>
#include<math.h>

int main()
{
int i,t,power;
double base;
scanf("%d",&t);
while(t--)
{
scanf("%lf",&base);
scanf("%d",&power);
printf("%0.2f",base*pow(10,power));
}
return 0;
}
