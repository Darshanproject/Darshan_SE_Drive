#include <stdio.h>
main() {
    double side1, side2, side3, perimeter;
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);
    perimeter = side1 + side2 + side3;
    printf("Perimeter of the triangle: %lf\n", perimeter);
}

