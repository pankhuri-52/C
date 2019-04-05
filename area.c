#include<stdio.h>
float cal_area(float r);
float cal_area(float r)
{
float area;
area=3.14*r*r;
return area;
}
int main()
{
float r,d;
scanf("%f",&r);
d=cal_area(r);
printf("%f",d);
return 0;
}
