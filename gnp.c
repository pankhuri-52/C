#include<stdio.h>
int main()
{
int i,j,rows,columns;
printf("Enter the number of rows and columns\n");
scanf("%d\n %d\n",&rows,&columns);
int a[rows][columns];
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d\n",*(a+i)+0);
}
}
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
printf("%d\n",a[i][j]);
}
}
return 0;
}
