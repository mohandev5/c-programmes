#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in array :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            temp=a[j];
            if(temp>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
}
