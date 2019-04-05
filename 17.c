#include<stdio.h>
int main()
{
int a=25;
void *ptr=(int*)&a;
printf("%d",*ptr);
getchar();
return 0;
}
