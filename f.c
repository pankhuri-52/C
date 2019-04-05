#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,b=0,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        b=b+r*pow(2,i);
        i++;
    }
    printf("%d",b);
    return 0;
}
