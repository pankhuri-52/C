#include<stdio.h>
int main()
{
int num,a,newnum;
printf("enter the value of num");
scanf("%d",&num);
printf("set the nth bit");
scanf("%d",&a);
newnum=((1<<(a-1))|num);
printf("%d",newnum);
return 0;
}

