#include<stdio.h>
void main(){
	int i,num[5];
	for(i=0;i<5;i++){
		printf("Enter your numbers here : ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		printf("This is your values : %d \n",num[i]);
	}
}
