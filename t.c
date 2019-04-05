#include<stdio.h>
#include<math.h>
int main()
{
int a;
scanf("%d",&a);
switch(a%2==0)
{
case 1:
printf("even");
break;
case 0:
printf("odd");
break;
//
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
//
default:
    printf("default");
}


return 0;

}
