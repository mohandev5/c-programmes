#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0,h;
    int a[100][100];
    printf("enter the rows and columns:");
    scanf("%d%d",&r,&c);
    printf("enter elements in an array:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("\n%d\n",sum);
    for(h=1;h<sum;h++)
    {
        if(sum%h==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        printf("it is prime");
    }
    else
    {
        printf("it is not a prime");
    }
}
