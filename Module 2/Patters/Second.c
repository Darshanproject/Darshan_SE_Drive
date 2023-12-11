#include<stdio.h>
void main(){
	int Even,Odd,Number=1;
	for(Even=1;Even<=5;Even++){
		for(Odd=1;Odd<=Even;Odd++){
			printf("%d",Number++);
		}
		printf("\n");
	}
}
