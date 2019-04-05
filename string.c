#include<stdio.h>
int main()
{
char s1[6]="Hello";
printf("%s\n",s1);
char *s2;
s2=s1;
s2[1]='A';
printf("%s\n",s2);
return 0;
}
