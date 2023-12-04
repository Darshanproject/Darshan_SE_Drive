#include<stdio.h>
void main() {
    int number,i,factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is: %d\n", number, factorial);
    }
}

