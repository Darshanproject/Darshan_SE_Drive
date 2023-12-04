#include <stdio.h>

int main() {
    // Declare variables
    int i = 0,number,sum = 0; 
    printf("Enter 10 numbers:\n");
    while (i < 10) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
        i++;
    }
    printf("Sum of the 10 numbers is: %d\n", sum);
}

