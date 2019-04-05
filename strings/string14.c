#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],text[50],new_str[50];
    int i=0,j=0,k=0,copy_loop=0,n=0;
    gets(text);
    gets(str);
    while(text[i]!='\0')
    {
        j=0,k=i;
    while(text[k]==str[j]&&str[j]!='\0')
    {
        k++;
    j++;
    }
    if(str[j]=='\0')
        copy_loop=k;
        new_str[n]=text[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    puts(new_str);
    return 0;
}
