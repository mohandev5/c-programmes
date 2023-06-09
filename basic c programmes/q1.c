#include<stdio.h>
void palindrome()
{
    int n,rev=0,rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
}
int main()
{
    int n,i,sum=0,mul=1;
    printf("enter the array size:");
    scanf("%d",&n);
    int a[10];
    printf("enter the elements in an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+2)
    {
        printf("%d",a[i]);
        sum=sum+a[i];
    }
    printf("%dsum:",sum);
   palindrome(sum);
    for(i=1;i<n;i+2)
    {
        mul=mul*a[i];
    }
    printf("%dmul:",mul);
    palindrome(mul);
}
