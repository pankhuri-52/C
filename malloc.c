#include<stdio.h>
int main()
{
int i,n,rows,columns,j;
scanf("%d",&rows);
scanf("%d",&columns);
int *p;
p=(int*)malloc(rows*columns*sizeof(int));
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",(p+i*columns)+j);
}
}
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
printf("%d",*((p+i*columns)+j));
}
return 0;
}}
