#include<stdio.h>
void main() {
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("\nBefore swapping:\n");
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    printf("\nAfter swapping:\n");
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);
}

