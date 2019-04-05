#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i=0;
    gets(str1);
    while(str1[i]!='\0')
    {
        if(str1[i]>='A'&&str1[i]<='Z')
            str2[i]=str1[i]+32;
        else
            str2[i]=str1[i];
        i++;
    }
    puts(str2);
    return 0;
}
