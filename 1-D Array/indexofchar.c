#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n;
char c;
//scanf("%d",&n);
char a[10];
gets(a);
scanf("%c",&c);
for(i=0;i<strlen(a);i++)
{
if(a[i]==c)
  break;
}
printf("%d",i+1);
return 0;
}
