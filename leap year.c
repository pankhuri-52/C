#include<stdio.h>
int main()
{
int i=1900;
do
{
    if(i%4==0)
       printf("leap year is %d\n",i);
i++;
}
while(i<=2100);
return 0;
}
