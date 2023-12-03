#include<stdio.h>
void main() {
    const int daysInYear = 365; 
    int years, days;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    days = years * daysInYear;
    printf("%d years is equal to %d days.\n", years, days);
    years = days / daysInYear;
    printf("%d days is equal to %d years.\n", days, years);
}

