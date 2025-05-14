#include <stdio.h>

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The square number of %d is: %d\n", n, n * n);
    printf("The cube number of %d is: %d\n", n, n * n * n);
  
    return 0;
}