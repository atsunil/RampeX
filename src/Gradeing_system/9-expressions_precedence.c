#include <stdio.h>

int main() {
    int a, b, c, result;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = a + b * c; 
    printf("Result of a + b * c: %d\n", result);

    result = (a + b) * c; 
    printf("Result of (a + b) * c: %d\n", result);

    int x = 1, y = 0;
    int logicalResult = x || y && 0; 
    printf("Result of x || y && 0: %d\n", logicalResult);

    logicalResult = (x || y) && 0;
    printf("Result of (x || y) && 0: %d\n", logicalResult);

    return 0;
}