#include<stdio.h>
void main() {
    const int daysInMonth = 30; 
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    int months = days / daysInMonth;
    printf("%d days is approximately %d months.\n", days, months);
}

