#include <stdio.h>
int main()
{
    int sum,i,j;
    printf("enter the series:");
    scanf("%d",&sum);
    for(i=1;i<sum;i++){
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}