#include<stdio.h>
int main()
{
char name[5][10];
int i;
for(i=0;i<5;i++)
scanf("%s",name[i]);
for(i=0;i<5;i++)
printf("%s",name[i]);
return 0;
}
