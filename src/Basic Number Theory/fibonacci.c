#include<stdio.h>

int main()
{
    int a,i,f,b=1;
    printf("enter the number:");
    scanf("%d",a);
    for (i = 1; i <= a; i++)
    {
        f=a+b;
        f=b;
        printf("the num is %d",f);
    }
    return 0;
}