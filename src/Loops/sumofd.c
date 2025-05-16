#include <stdio.h>

int main() {
    int a=0,b;
 
    printf("enter the number:");
    scanf("%d",&b);
    
       
        while(b!=0)
        {
            a=a+b%10;
            b=b/10;
        }
        printf("\nthe sum of digits:%d",a);
    

    return 0;
}