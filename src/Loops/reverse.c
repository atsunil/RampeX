#include <stdio.h>
int main()
{
    int sum;
    printf("enter the number to reverse :");
    scanf("%d",&sum);
    while(sum>=1)
    {
        printf("%d\t",sum);
        sum--;
    }
    
    return 0;
}

