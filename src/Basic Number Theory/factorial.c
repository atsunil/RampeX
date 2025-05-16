#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("enter the number to factorial :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b *= i;
    }
    printf("the factorial of %d is %d", a, b);

    return 0;
}
