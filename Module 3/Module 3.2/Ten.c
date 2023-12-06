#include<stdio.h>
void main(){
	int num;
	printf("Enter your number here : ");
	scanf("%d",&num);
	if(num>0){
		printf("The entered number is positive ");
	}else if(num < 0){
		printf("The Entered number is negative ");
	}else {
		printf("The entered number is Zero");
	}
}
