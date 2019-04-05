#include<stdio.h>
#include<string.h>
int main()
{
    char source_str[50],dest_str[50];
    int i=0,j=0;
    gets(source_str);
    gets(dest_str);
    while(dest_str[i]!='\0')
        i++;
    while(source_str[j]!='\0')
    {
        dest_str[i]=source_str[j];
        i++;
        j++;
    }
    //dest_str[i]='\0';
    printf("%s",dest_str);
    return 0;
}
