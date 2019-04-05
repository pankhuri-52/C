#include<stdio.h>
#include<string.h>
int main()
{
    char text[50],str[50],new_text[50];
    int i=0,j=0,k,n=0,copy_loop=0,rep_index=0;
    gets(text);
    gets(str);
    gets(new_text);
    while(text[i]!='\0')
    {
        j=0,i=0,k=i;
        while(text[k]==str[j]&&pat[j]!='\0')
        {
            k++;
            j++;
        }
        if(pat[j]=='\0')
        {
            copy_loop=k;
            while(new_pat[rep_index]!='\0')
            {
                new_str[n]=new_pat[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n]=str[copy_loop];
        i++;
        copy_loop++;
        n++;

    }
    puts(new_str);
    return 0;
}
