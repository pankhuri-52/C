#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",&str);
    printf("%s\n",str);
    printf("%20s\n",str);
    printf("%-20s\n",str);
    printf("%0.4s\n",str);
    printf("%20.4s\n",str);
    printf("%-20.4s\n",str);
    return 0;
}
