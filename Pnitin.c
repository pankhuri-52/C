#include<stdio.h>
int main()
{
int i,rows,columns,j;
printf("Enter the number of rows and columns\n");
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
printf("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}
