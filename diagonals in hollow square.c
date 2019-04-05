#include<stdio.h>
int main()
{
int i=0,j=0,rows,columns;
printf("enter the number of rows and columns");
scanf("%d %d",&rows,&columns);
for(i=0;i<=rows;i++)
{
for(j=0;j<=columns;j++)
{
if(i==0||i==rows||j==0||j==columns||i==j||i+j==rows)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
