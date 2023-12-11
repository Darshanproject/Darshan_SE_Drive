#include<stdio.h>
void main(){
	int Even,Odd,Number=1;
	for(Even=1;Even<=5;Even++){
		for(Odd=1;Odd<=Even;Odd++){
			printf("*");
		}
		printf("\n");
	}
	for(Even=0;Even<=6;Even++){
		for(Odd=5;Odd>=Even-1;Odd--){
			printf("*");
		}
		printf("\n");
	}
}
