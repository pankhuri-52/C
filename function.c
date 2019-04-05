#include<stdio.h>
#include<math.h>
int max(int num1, int num2);
int min(int num1, int num2);
int main()
{
int num1, num2, maximum, minimum;
scanf("%d %d",&num1,&num2);
maximum=max(num1, num2);
minimum=min(num1, num2);
printf("Max=%d\n Min=%d\n",maximum,minimum);
return 0;
}
({
int max,min;

max=(num1>num2)?num1:num2;
min=(num1<num2)?num1:num2;
return max,min;
}
