#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str1[50];
    int i=0,j=0,linecount=1;
    gets(str);
    while(str[i]!='*')
    {
        i++;
    }
    str[i]='\0';
    i=0;
    while(str[i]!='\0')
    {
        if(linecount==0&&i==0)
            printf("%d\t",linecount);
        if(str[i]=='\n')
        {
            linecount++;
            printf("%d\n",linecount);
        }
        puts(str);
    }
    return 0;
}
