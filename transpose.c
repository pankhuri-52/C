#include<stdio.h>
int main()
{
int i,rows,columns,j;
printf("enter the number of rows and columns");
scanf("%d %d",&rows,&columns);
int a[rows][columns];
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
return 0;
}
