#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],upper_str[50];
    int i=0;
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
            upper_str[i]=str[i]-32;
        else
            upper_str[i]=str[i];
            i++;
    }
    puts(upper_str);
    return 0;
}
