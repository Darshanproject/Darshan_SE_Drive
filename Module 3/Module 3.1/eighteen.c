#include<stdio.h>
main(){
	double salary,insurancepremium,loaninstallments,remaingsalary;
	printf("Enter your salary here : ");
	scanf("%lf",&salary);
	insurancepremium=(salary/10);
	printf("This is your insurance premium per month : %.2lf \n",insurancepremium);
	loaninstallments=(salary/10);
	printf("This is your insurance loan installments per month : %.2lf \n",loaninstallments);
	remaingsalary=salary-loaninstallments-insurancepremium;
	printf("This is your remaing salary %.2lf",remaingsalary);
	
}
