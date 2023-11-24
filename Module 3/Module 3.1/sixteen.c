#include<stdio.h>
main(){
	double monthlysalary,annualysalary;
	printf("Enter your Monthly Salary here : ");
	scanf("%lf",&monthlysalary);
	annualysalary=12*monthlysalary;
	printf("This is your Annulay Salary : %.2lf",annualysalary);
}
