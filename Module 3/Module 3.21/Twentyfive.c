#include<stdio.h>
void main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        return 1;
    }
    int days;
    switch (month) {
        case 2:
            days = 28;
            break;
        case 4:
        	days = 30;
            break;
        case 6:
        	days = 30;
            break;
        case 9:
        	days = 30;
            break;
        case 11:
            days = 30;
            break;
        default:
            days = 31;
    }
    printf("Number of days in month %d: %d\n", month, days);
}

