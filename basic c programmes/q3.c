#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="mohan@*#1234";
    int i,j,c=0,c1=0,c2=0,c3=0;
    for(i=0;a[i]!='\0';i++)
    {
        c=c+1;
    }
    printf("total characters:%d\n",c);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            c1=c1+1;
        }
        else if(a[i]>=48&&a[i]<=57)
        {
            c2=c2+1;
        }
        else
        {
            c3=c3+1;
        }
    }
    printf("no of alphabets:%d\n",c1);
    printf("no of numbers:%d\n",c2);
    printf("no of special characters:%d\n",c3);
    
}
