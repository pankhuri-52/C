#include<stdio.h>
void swap(int *m,int *n);
void swap(int *m,int *n)
{
int temp;
temp=*m;
*m=*n;
*n=temp;
printf("%d %d",*m,*n);
}
int main()
{
int a,b;
scanf("%d %d",a,b);
swap(a,b);
return 0;
}
