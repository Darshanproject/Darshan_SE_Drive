#include <stdio.h>
main() {
    double width, length, height, surfaceArea;
    printf("Enter the width of the rectangular prism: ");
    scanf("%lf", &width);
    printf("Enter the length of the rectangular prism: ");
    scanf("%lf", &length);
    printf("Enter the height of the rectangular prism: ");
    scanf("%lf", &height);
    surfaceArea = 2 * (width * length + height * length + height * width);
    printf("Surface area of the rectangular prism: %lf\n", surfaceArea);
}

