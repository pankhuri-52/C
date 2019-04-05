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
if(j==0||i==rows||i==j)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
