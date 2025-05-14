#include <stdio.h>

int main() {
    int tam, eng, math, phy, chem, comp, sum;
    float avg;
    printf("=========================================\n");
    printf("         STUDENT MARKS CALCULATOR        \n");
    printf("=========================================\n");
    printf("Enter marks in Tamil: ");
    scanf("%d", &tam);  
    printf("Enter marks in English: ");
    scanf("%d", &eng);
    printf("Enter marks in Maths: ");
    scanf("%d", &math);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);
    printf("Enter marks in Computer: ");
    scanf("%d", &comp);
    avg = (tam + eng + math + phy + chem + comp) / 6.0;
    sum = tam + eng + math + phy + chem + comp;
    printf("\n=========================================\n");
    printf("               RESULT                      \n");
    printf("=========================================\n");
    printf("Total Marks: %d\n", sum);
    printf("Average Marks: %.2f\n", avg);
    printf("=========================================\n");
    return 0;
}