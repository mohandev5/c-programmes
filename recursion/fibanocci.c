
#include <stdio.h>
int fib(int a,int b,int d)
{
    if(d<100)
    {
        d=a+b;
        a=b;
        b=d;
        printf("\n%d",d);
        return fib(a,b,d);
    }
}

int main()
{
    int a=0,b=1,c=0,d=0;
    printf("%d\n%d",a,b);
    fib(a,b,d);

    return 0;
}

