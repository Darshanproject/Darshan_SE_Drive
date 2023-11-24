#include <stdio.h>
main() {
    double length, width, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    perimeter = 2 * (length + width);
    printf("Perimeter of the rectangle: %lf\n", perimeter);
}

