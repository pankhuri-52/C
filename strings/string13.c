#include<stdio.h>
#include<string.h>
int main()
{
    char text[50],str[50],insert_str[50];
    int i=0,j=0,k=0,pos;
    gets(text);
    gets(str);
    scanf("%d",&pos);
    while(text[i]!='\0')
    {
        if(i==pos)
        {
            while(str[k]!='\0')
            {
                insert_str[j]=str[k];
                j++;
                k++;
            }
        }
        else
        {
            insert_str[j]=text[i];
            j++;
        }
        i++;
    }
    puts(insert_str);
    return 0;
}
