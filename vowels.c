#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
switch(a)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("vowel");
break;
default:
if(a>=97&&a<=122)
{
printf("consonant");
}
else
{
printf("invalid character");
}
break;
}
return 0;
}
