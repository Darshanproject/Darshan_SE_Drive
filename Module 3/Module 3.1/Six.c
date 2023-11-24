#include <stdio.h>
main() {
    double base, height, area;
    printf("Enter the length of the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    area = 0.5 * base * height;
    printf("Area of the triangle: %lf\n", area);
}

