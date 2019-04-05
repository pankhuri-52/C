#include<stdio.h>
int main()
{
int i=0,j=0,rows,columns;
printf("enter the number of rows and columns");
scanf("%d %d",&rows,&columns);
for(i=1;i<=rows;i++)
{
for(j=1;j<=columns;j++)
{
if(i==j||i+j-1==rows)
printf("1");
else
printf("0");
}
printf("\n");
}
return 0;
}
