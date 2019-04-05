#include<stdio.h>
int main()
{
char ch;
printf("enter any character either in uppercase or lowercase");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
{printf("character in uppercase is %c",ch-32);}
else
{printf("character in lowercase is %c",ch+32);}
return 0;
}
