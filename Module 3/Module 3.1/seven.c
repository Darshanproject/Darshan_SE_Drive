#include <stdio.h>
main() {
    double width, length, area;
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    area = width * length;
    printf("Area of the rectangle: %lf\n", area);
}

