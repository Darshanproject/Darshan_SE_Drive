#include<stdio.h>
void main(){
	int Even,Odd;
	char Number='A';
	for(Even=0;Even<=5;Even++){
		for(Odd=0;Odd<=Even;Odd++){
			printf("%c",Number+Odd);
		}
		
		printf("\n");
	}
}
