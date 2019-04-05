#include<stdio.h>
#include<math.h>
int main()
{
int n,k,i=1,j,a;
scanf("%d %d",&n,&k);long long int a[n+1];
if(n<=k)
{
    printf("%d",i);
}
else
{
for(i=0;i<=n;i++)
{
a[i]=1;
a[i]=k;
j=1;
}
for(i=k+2;i<=n;i++)
{
a[i]=a[i-1]+a[i-1]-a[j];
a[i]=a[i]mod%10000007;
j++;
}
}
printf("%lld",a[n]);
return 0;
}
