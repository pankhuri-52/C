#include<stdio.h>
void add(int n);
void add(int n)
{
n=n+10;
printf("the value of num after adding 10 is %d",n);
}
int main()
{
int a;
scanf("%d",&a);
add(a);
}
