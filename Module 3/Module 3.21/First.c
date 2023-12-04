#include<stdio.h>
void main(){
	int num,num1;
	printf("Enter your first numbere here : ");
	scanf("%d",&num);
	printf("Enter your first numbere here : ");
	scanf("%d",&num1);
	if(num>num1){
		printf("Number one is greater than num1");
	}else if(num1>num){
		printf("Number two is greater than num");
	}else if(num==num1){
		printf("Both numbers are equal ");
	}else{
		printf("They are not equal");
	}
}
