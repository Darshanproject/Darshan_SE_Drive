#include<stdio.h>
void main() {
    const int numExpenses = 5;
    float expenses[numExpenses];
    float totalExpense = 0.0;
    float averageExpense;
    int i;
    printf("Enter 5 expenses:\n");

    for (i = 0; i < numExpenses; i++) {
        printf("Enter expense %d: rs", i + 1);
        scanf("%f", &expenses[i]);
        totalExpense += expenses[i];
    }
    averageExpense = totalExpense / numExpenses;
    printf("\nExpense Details:\n");
    for (i = 0; i < numExpenses; i++) {
        printf("Expense %d: rs%.2f\n", i + 1, expenses[i]);
    }
    printf("\nTotal Expense: rs%.2f\n", totalExpense);
    printf("Average Expense: rs%.2f\n", averageExpense);
}

