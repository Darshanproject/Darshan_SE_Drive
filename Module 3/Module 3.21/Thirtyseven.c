#include<stdio.h>
void main() {
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);  
    int originalNumber = number;
    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Sum of digits in %d is: %d\n", originalNumber, sum);
}

