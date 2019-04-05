#include <stdio.h>
#include<string.h>
int main(void)
{
	int l,i,j,sum,A;
	char a[100001];
	scanf("%d",&A);
	for(j=0;j<A;j++)//number of test cases
	{
		sum=0;
		scanf("%s",a);
		l=strlen(a);
		for(i=0;i<l;i++)
		sum=sum+a[i]-48;//getting the sum of digits
		if(sum<5)
		{
			if(l==1)
			printf("%d\n",sum);
		else
		printf("%d\n",9-sum);
		}
		else
		{
			sum=sum%9;
			if(sum<5)
			printf("%d\n",sum);
			else
			printf("%d\n",9-sum);
		}
	}
	return 0;
}
