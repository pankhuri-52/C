#include<stdio.h>
int check_relation(int a,int b);
int check_relation(int a,int b)
{
if(a==b)
return 0;
else if(a>b)
return 1;
else
return -1;
}
int main()
{
int res,a,b;
scanf("%d %d",&a,&b);
res=check_relation(a,b);
if(res==0)
printf("equal)");
if (res==1)
printf("a is greater than b");
if(res==-1)
printf("a is less than b");
}
