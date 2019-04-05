#include<stdio.h>
int main()
{
int i=0,j=0;
//scanf("%d %d",&rows,&columns);
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
if(i==0||i==4||j==0||j==4)
printf("*");
if(i==1||i==3||j==1||j==3)
printf("*");
if(i==2||j==2)
printf(" ");
}
printf("\n");
}
return 0;
}
