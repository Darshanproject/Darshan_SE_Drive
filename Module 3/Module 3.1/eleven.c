#include <stdio.h>
main() {
    double side, circumference;
    printf("Enter the length of one side of the square: ");
    scanf("%lf", &side);
    circumference = 4 * side;
    printf("Circumference of the square: %lf\n", circumference);
}

