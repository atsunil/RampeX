#include <stdio.h>

int main() {
    float length, width, area, perimeter;
    printf("=========================================\n");
    printf("         AREA AND PERIMETER              \n");      
    printf("=========================================\n");
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("=========================================\n");
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("=========================================\n");
    return 0;
}