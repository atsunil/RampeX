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
    if (tam < 35 || eng < 35 || math < 35 || phy < 35 || chem < 35 || comp < 35) {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass\n");
    }
    printf("=========================================\n");
    return 0;
}