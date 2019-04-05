#include<stdio.h>
int largest(int a,int b,int c);
int largest(int a,int b,int c)
{
int largest;
largest=((a>b)?((a>c)?a:c):((b>c)?b:c));
printf("largest is %d",largest);
}
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
largest(a,b,c);
return 0;
}
