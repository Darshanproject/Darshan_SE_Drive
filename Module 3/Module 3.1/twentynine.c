#include<stdio.h>
void main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Powers of %d:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);
}

