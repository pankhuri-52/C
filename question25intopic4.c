#include<stdio.h>
void sort(int m,int x[]);
void sort(int m,int x[])
{
int i,j,temp=0;
for(i=0;i<m-1;i++)
{
for(j=0;j<m-i-1;j++)
{
    if(x[j]>x[j+1])
    {
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
    }
}
}
for(i=0;i<m;i++)
{
printf("%d\n",x[i]);
}
}
int main()
{
int i,m;
scanf("%d",&m);
 int x[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
    }
 sort(m,x);
    return 0;
}
