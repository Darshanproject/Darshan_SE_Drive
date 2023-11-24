#include<stdio.h>
main(){
	int num,num1,ans;
	printf("Enter your numbers here :");
	scanf("%d%d",&num,&num1);
	ans=num+num1;
	printf("This is your addtion %d",ans);
	ans=num-num1;
	printf("This is your sub %d",ans);
	ans=num*num1;
	printf("This is your mul %d",ans);
	ans=num/num1;
	printf("This is your division %d",ans);
}
