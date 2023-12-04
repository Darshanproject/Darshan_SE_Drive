#include<stdio.h>
void main() {
    int number, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    lastDigit = number % 10;
    int temp = number;
    int digitCount = 0;
    while (temp != 0) {
        temp /= 10;
        digitCount++;
    }
    temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    sum = firstDigit + lastDigit;
    printf("Sum of the first and last digits in %d is: %d\n", number, sum);
}

