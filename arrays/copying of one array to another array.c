#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of an array :");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements in an array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d",b[i]);
    }
    return 0;
}

   
