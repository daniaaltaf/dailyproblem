#include <stdio.h>

int main() {
    float weight, height, bmi;

    scanf("%f %f", &weight, &height); // weight in kg, height in meters

    bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    return 0;
}
