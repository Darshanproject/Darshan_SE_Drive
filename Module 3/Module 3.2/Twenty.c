#include<stdio.h>
void main() {
    int customerId;
    char customerName[50];
    float unitConsumed, totalAmount, surcharge;
    printf("Enter customer ID: ");
    scanf("%d", &customerId);
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);
    if (unitConsumed <= 350) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed > 350 && unitConsumed < 600) {
        totalAmount = 350 * 1.20 + (unitConsumed - 350) * 1.50;
    } else if (unitConsumed >= 600 && unitConsumed < 800) {
        totalAmount = 350 * 1.20 + 250 * 1.50 + (unitConsumed - 600) * 1.80;
    } else {
        totalAmount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unitConsumed - 800) * 2.00;
    }
    if (totalAmount > 800) {
        surcharge = totalAmount * 0.18;
        totalAmount += surcharge;
    }
    if (totalAmount < 256) {
        totalAmount = 256;
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount to be Paid: Rs. %.2f\n", totalAmount);
}

