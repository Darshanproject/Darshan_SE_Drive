#include<stdio.h>
void main() {
    int numbers[10],i;
    int evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenSum += numbers[i];
        } else {
            oddCount++;
            oddSum += numbers[i];
        }
    }
    printf("\nResults:\n");
    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", evenSum);
    printf("d. Sum of odd numbers: %d\n", oddSum);
}

