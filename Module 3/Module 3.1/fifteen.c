#include <stdio.h>
//there is one query there is no amout or per declared for 
//premium so please insure that it is true or we have to 
// declear it by default 0.10%
main() {
    double salary, premium;
    printf("Enter the person's salary: ");
    scanf("%lf", &salary);
    premium = 0.10 * salary;
    printf("Insurance Premium: %.2lf\n", premium);
}

