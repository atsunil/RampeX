#include<stdio.h>

int main () {
    int a, b, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("%d / %d = %d\n", a, b, result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (b != 0) {
                result = a % b;
                printf("%d %% %d = %d\n", a, b, result);
            } else {
                printf("Modulus by zero is not allowed.\n");
            }
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}