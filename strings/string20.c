#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str1[50];
    int i=0,j=0;
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==',')
            str1[i]=';';
        else
            str1[i]=str[i];
        i++;
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}
