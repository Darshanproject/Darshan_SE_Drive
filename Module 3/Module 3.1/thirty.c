#include<stdio.h>
void main() {
    const int metersInKilometer = 1000;
    float kilometers, meters;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * metersInKilometer;
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);
}

