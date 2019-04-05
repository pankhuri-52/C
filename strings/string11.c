#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],substring[50];
    int i=0,n,j=0;
    gets(str);
    scanf("%d",&n);
    j=strlen(str)-n;
    while(str[j]!='\0')
    {
        substring[i]=str[j];
        i++;
        j++;
    }
    substring[i]!='\0';
    puts(substring);
    return 0;
}
