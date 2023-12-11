#include<stdio.h>
void main(){
	int i,j,row=2,col=10,Numbers=1;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			printf("%d \t",Numbers++);
		}
		printf("\n");
	}
}
