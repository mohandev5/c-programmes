#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int len,i;
    printf("enter the character name :");
    scanf("%s",a);
    len=strlen(a);
    for(i=len;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
