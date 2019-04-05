#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],substr[50];
    int i=0,j=0,n,m;
    gets(str);
    scanf("%d",&m);
    scanf("%d",&n);
    i=m;
    while(str[i]!='\0'&&n>0)
    {
        substr[j]=str[i];
        i++;
        j++;
        n--;
    }
    substr[j]='\0';
    puts(str);
    return 0;
}
