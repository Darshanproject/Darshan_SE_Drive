#include<stdio.h>
void main(){
	int number;
	printf("Enter your number here : ");
	scanf("%d",&number);
	(number%2==0)?printf("The given number is even "):printf("The given number is odd");
}
