#include<stdio.h>
int main()
{
    int n,a[n],b[n],c[n],i;
    printf("enter the array size :");
    scanf("%d",&n);
    printf("enter first array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nenter second array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("\n sum of arrays :%d",c[i]);
    }
}
