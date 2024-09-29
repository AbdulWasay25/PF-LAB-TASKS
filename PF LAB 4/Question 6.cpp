#include<stdio.h>
int main(){
	int num1 , num2 ;
	printf("ENTER ANY TWO NUMBERS\n");
	scanf("%d%d",&num1,&num2);
	if(num1==num2){
		printf("NUMBERS ARE EQUAL");
	}
	else if(num1>num2){
		if(num1>100){
			printf("\nFIRST NUMBER IS SIGNIFICANTLY LARGER");
		}
		else{
			printf("\nFIRST NUMBER IS GREATER");
	    }
	}
	else{
		if(num1<0){
			printf("FIRST NUMBER IS NEGATIVE AND SMALLER");
		}
		else{
			printf("FIRST NUMBER IS SMALLER");
		}
	}
	return 0;
}
	