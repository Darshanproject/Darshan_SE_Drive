#include<stdio.h>
void main() {
    char o;
    double num1, num2, result;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &o); 
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (o) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = fmod(num1, num2);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }
}

