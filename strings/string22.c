#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i=0,j,length=0;
    gets(str);
    while(str[i]!='\0')
        length++;
    i++;
    i=0;
    j=length-1;
    while(i<=length/2)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
        else
            break;
    }
    if(i>=j)
        printf("Palindrome\n");
    else
        printf("Not Palindrome");
    return 0;
}
