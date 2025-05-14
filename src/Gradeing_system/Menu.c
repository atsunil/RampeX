#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

void calculateCircleArea() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = M_PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
}

void calculateRectangleArea() {
    float length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area of the rectangle is: %.2f\n", area);
}

void calculateSquareArea() {
    float side, area;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("The area of the square is: %.2f\n", area);
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Calculate area of Circle\n");
        printf("2. Calculate area of Rectangle\n");
        printf("3. Calculate area of Square\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculateCircleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateSquareArea();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}