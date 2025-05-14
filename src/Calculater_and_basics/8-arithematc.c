#include <stdio.h>

int main() {
    int a, b, sum, sub, mul, div, mod;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    printf("Sum:%d\n", sum);
    printf("Subtraction:%d\n", sub);
    printf("Multiplication:%d\n", mul);
    if (b != 0) {
        div = a / b;
        printf("Division: %d / %d = %d\n", a, b, div);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    if (b != 0) {
        mod = a % b;
        printf("Modulus:%d\n", mod);
    } else {
        printf("Modulus by zero is not allowed.\n");
    }
    return 0;
}