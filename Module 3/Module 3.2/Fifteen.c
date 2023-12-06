#include <stdio.h>
void main() {
    int physics, chemistry, maths, totalMarks, totalMathsPhysics;
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);
    totalMarks = physics + chemistry + maths;
    totalMathsPhysics = maths + physics;
    if (physics >= 65 && chemistry >= 55 && maths >= 50 && (totalMarks >= 190 || totalMathsPhysics >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
}

