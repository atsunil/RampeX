#include<stdio.h>

int main() {
    int temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);
    printf("The temperature is %d'c.\n", temp);
    if(temp <10){
        printf("Wear a jacket\n");
    } else if(temp < 20){
        printf("Wear a sweater\n");
    } else if(temp > 20){
        printf("Wear t-shirt\n");
    }
    return 0;
}