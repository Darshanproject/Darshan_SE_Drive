#include<stdio.h>
main(){
	int num,num1,temp;
	printf("Enter your number here : ");
	scanf("%d",&num);
	printf("Enter your number here :");
	scanf("%d",&num1);
	while(num!=0&&num1!=0){
		temp=num;
		num=num1;
		num1=temp;
	}
	printf("This is after swaping  %d",num);
	printf("This is after swaping  %d",num1);
}
