#include<stdio.h>
void main() {
    int n, i,first = 0, second = 1, next;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of terms should be a positive integer.\n");
    } else {
        printf("Fibonacci Series up to %d terms: ", n);
        for (i = 0; i < n; ++i) {
            if (i <= 1) {
                next = i;
            } else {
                next = first + second;
                first = second;
                second = next;
            }
            printf("%d ", next);
        }
        printf("\n");
    }
}

