#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],i=0;
    int length;
    gets(str);
    while(str[i]!='\0')
    {
        i++;
    }
    length=i;
    printf("%d",length);
    return 0;
}
