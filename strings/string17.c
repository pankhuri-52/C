#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i=0,count=0;
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' '&&str[i+1]!=' ')
        count++;
        i++;
    }
    printf("%d",count+1);
    return 0;
}
