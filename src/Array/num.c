#include<stdio.h>

int main(){
    int a, i, j;
    printf("enter the :");
    scanf("%d",&a);
    for(j=0;j<=9;j++){
        for(i=0;i<=a;i++){
            printf("%d%d\t",i,j);
        }
        printf("\n");
    }
    return 0;
}