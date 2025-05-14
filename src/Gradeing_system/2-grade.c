#include <stdio.h>

int main() {
    int tam, eng, math, phy, chem, comp;
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
    printf("\n=========================================\n");
    printf("               RESULT                      \n");
    printf("=========================================\n");
    printf("Total Marks: %d\n", tam + eng + math + phy + chem + comp);
    printf("Average Marks: %.2f\n", avg);
    if (avg >= 90) {
        printf("Grade: A\n");
    } else if (avg >= 80) {
        printf("Grade: B\n");
    } else if (avg >= 70) {
        printf("Grade: C\n");
    } else if (avg >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    printf("=========================================\n");
    return 0;
}