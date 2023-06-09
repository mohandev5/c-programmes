#include<stdio.h>
int main()
{
    int i,a[i],n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the elements of an arry:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
