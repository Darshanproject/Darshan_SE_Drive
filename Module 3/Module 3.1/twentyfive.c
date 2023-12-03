#include<stdio.h>
void main() {
    const int daysInYear = 365; 
    const int daysInMonth = 30; 
    int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    int days = years * daysInYear;
    int months = days / daysInMonth;
    printf("%d years is equal to %d days or approximately %d months.\n", years, days, months);
}

