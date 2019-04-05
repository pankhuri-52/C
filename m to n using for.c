#include<stdio.h>
int main()
{
int m,n,i;
printf("enter the values of m and n");
scanf("%d %d",&m,&n);
for(i=m;i<=n;i++)
{
printf("%d",i);
if(i%2==0)
printf("no. is even\n");
else
printf("no. is odd\n");
}
return 0;
}
