#include<stdio.h>
void change(int *);
int main()
{
int a;
scanf("%d",&a);
change(&a);
printf("%d",a);
}
void change(int *m)
{
*m=*m+30;
printf("%d",*m);
}
