int second_smallest(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
        }
    }
   return a[1];
}
int second_largest(int *a,int n)
{

    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
        }
    }
   return a[n-1];
}


int main()
{
    int i,j,n,b,c;
    scanf("%d",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  b=second_smallest(a,n);
    c=second_largest(a,n);
     printf("Second Smallest Element:%d\n",b);
     printf("Second Largest Element:%d\n",c);
     return 0;
     }
