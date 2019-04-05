#include<stdio.h>
#include<string.h>
int main()
{
    char text[50];
    int i=0,line_count=1,word_count=1,char_count=1;
    gets(text);
    while(text[i]!='*')
    {
        i++;
        //scanf("%c",&text[i]);
    }
    text[i]='\0';
    i=0;
    while(text[i]!='\0')
    {
        if(text[i]=='\n'||i==79)
            line_count++;
        if(text[i]==' '&&text[i+1]!=' ')
            word_count++;
        char_count++;
        i++;
    }
    printf("%d\n",line_count);
    printf("%d\n",word_count);
    printf("%d\n",char_count);
    return 0;
}
