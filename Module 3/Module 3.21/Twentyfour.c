#include<stdio.h>
void main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        return 1; 
    }
    switch (month) {
        case 1:
            printf("Month %d: January\n", month);
            break;
        case 2:
            printf("Month %d: February\n", month);
            break;
        case 3:
            printf("Month %d: March\n", month);
            break;
        case 4:
            printf("Month %d: April\n", month);
            break;
        case 5:
            printf("Month %d: May\n", month);
            break;
        case 6:
            printf("Month %d: June\n", month);
            break;
        case 7:
            printf("Month %d: July\n", month);
            break;
        case 8:
            printf("Month %d: August\n", month);
            break;
        case 9:
            printf("Month %d: September\n", month);
            break;
        case 10:
            printf("Month %d: October\n", month);
            break;
        case 11:
            printf("Month %d: November\n", month);
            break;
        case 12:
            printf("Month %d: December\n", month);
            break;
    }
}

