#include <stdio.h>
main() {
    double principal, rate, time, compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%lf", &rate);
    printf("Enter the number of years: ");
    scanf("%lf", &time);
    compoundInterest = principal * (1.0 - 1.0 / (1.0 + rate) / (1.0 + rate) / (1.0 + rate) /(1.0 + rate));
    printf("Compound Interest: %.2lf\n", compoundInterest);
}

