#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],substr[50];
    int i=0,n;
    gets(str);
    scanf("%d",&n);
    while(str[i]!='\0'&&i<n)
    {
        substr[i]=str[i];
        i++;
    }
    substr[i]='\0';
    puts(substr);
    return 0;
}
