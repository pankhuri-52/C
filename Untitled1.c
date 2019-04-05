#include<stdio.h>
int main()
{
int i=0,g=0,b;
scanf("%d",&b);
while(b!=-1)
{
g=b>g?b:g;
scanf("%d",&b);
}
printf("%d",g);
return 0;
}
