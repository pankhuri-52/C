#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    int i=0,j=0;
    gets(str);
    j=strlen(str)-1;
    while(i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
    puts(str);
    return 0;
}
