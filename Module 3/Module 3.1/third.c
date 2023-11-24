#include <stdio.h>
main() {
    double radius, area, circumference;
    double pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of the circle: %lf\n", area);
    printf("Circumference of the circle: %lf\n", circumference);
}

