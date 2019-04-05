#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str1[50];
    int n,m,j=0,i=0;
    gets(str);
    scanf("%d",&m);
    scanf("%d",&n);
    i=m;
while(str[i]!='\0'&&n>0)
{
    str1[j]=str[i];
    i++;
    j++;
    n--;
}
str1[j]='\0';
printf("%s",&str1);
    return 0;
}
