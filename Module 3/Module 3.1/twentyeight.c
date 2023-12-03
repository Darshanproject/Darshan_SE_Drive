#include<stdio.h>
void main() {
    int num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    if (sum > 100) {
        printf("The sum is greater than 100.\n");
    } else {
        printf("The sum is not greater than 100.\n");
    }
}

