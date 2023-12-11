#include<stdio.h>
void main(){
	int Even,Odd;
	for(Even=1;Even<=5;Even++){
		for(Odd=1;Odd<=Even;Odd++){
			if(Odd%2==0){
				printf("0");
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
}
