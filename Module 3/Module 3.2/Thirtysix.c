#include<stdio.h>
void main() {
    int number, maxDigit = -1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }
    if (maxDigit == -1) {
        printf("The number is 0.\n");
    } else {
        printf("Maximum digit is: %d\n", maxDigit);
    }
}

