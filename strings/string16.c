#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i=0;
    scanf("%c",&str[i]);
    while(str[i]!='*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("%d",i-1);
    return 0;
}
