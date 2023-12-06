#include<stdio.h>
void main() {
    float unitCharges;
    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);
    float totalBill, surcharge = 0.20 * unitCharges;
    float rate1 = 0.50, rate2 = 0.75, rate3 = 1.20, rate4 = 1.50;
    if (unitCharges <= 50) {
        totalBill = unitCharges * rate1;
    } else if (unitCharges <= 150) {
        totalBill = 50 * rate1 + (unitCharges - 50) * rate2;
    } else if (unitCharges <= 250) {
        totalBill = 50 * rate1 + 100 * rate2 + (unitCharges - 150) * rate3;
    } else {
        totalBill = 50 * rate1 + 100 * rate2 + 100 * rate3 + (unitCharges - 250) * rate4;
    }
    totalBill += surcharge;
    printf("\nElectricity Bill Details\n");
    printf("Electricity Unit Charges: %.2f\n", unitCharges);
    printf("Total Bill: Rs. %.2f\n", totalBill);
}

