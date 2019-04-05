#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int len1=0,len2=0,same=0,i=0,j=0;
    gets(str1);
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2)
        printf("The two strings are not equal\n");
    else if(len1==len2)
    {
        while(i<len1)
        {
            if(str1[i]==str2[i])
                i++;
            else
                break;
        }
        if(i==len1)
        {
            same=1;
            printf("The two strings are equal\n");
        }
    }
    if(same==0)
    {
        if(str1[i]>str2[j])
            printf("String1 is greater than String2\n");
        if(str2[i]>str1[i])
            printf("String2 is greater than String1\n");

    }
    return 0;
}
