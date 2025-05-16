#include <stdio.h>

int main(){
    int a, b = 0, c ;
    printf("enter the number to reverse:");
    scanf("%d", &a);
    while(a != 0)
    {
        c = a % 10;
        b = b * 10 + c;
        a = a / 10;
    }
    printf("the reverse number is:%d\n", b);
    return 0;    
}