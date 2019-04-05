#include<stdio.h>
int time_in_minutes(int hours,int minutes);
int time_in_minutes(int hours,int minutes)
{
int c,d,sum;
c=hours*60;
d=minutes;
sum=c+d;
return sum;
}
int main()
{
int hours,minutes,e;
scanf("%d %d",&hours,&minutes);
e=time_in_minutes(hours,minutes);
printf("%d",e);
return 0;
}
