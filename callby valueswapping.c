#include<stdio.h>
int swap(int,int);
int main()
{
int a,b;
scanf("%d %d",&a,&b);
swap(a,b);
return 0;
}
int swap(int m,int n)
{
int temp,c;
temp=m;
m=n;
n=temp;
printf("%d %d",m,n);
}
