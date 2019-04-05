#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50],new_string[50];
    int i=0,j=0;
    gets(str1);
    gets(str2);
    while(str1[i]!='\0')
    {
        new_string[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    new_string[j]=' ';
    j++;
    while(str2[i]!='\0')
    {
        new_string[j]=str2[i];
        i++;
        j++;
    }
    puts(new_string);
    return 0;
}
