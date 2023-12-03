#include<stdio.h>
void main() {
	int i;
    float principal, rate, time, amount, compound_interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest per annum: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);
    amount = principal;
    for ( i = 0; i < time; i++) {
        amount *= (1 + rate / 100);
    }
    compound_interest = amount - principal;
    printf("Principal Amount: $%.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time in Years: %.2f\n", time);
    printf("Amount after compound interest: $%.2f\n", amount);
    printf("Compound Interest: $%.2f\n", compound_interest);
}

