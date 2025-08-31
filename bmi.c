#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("\nYour BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("Category: Overweight\n");
    }
    else {
        printf("Category: Obese\n");
    }

    return 0;
}



