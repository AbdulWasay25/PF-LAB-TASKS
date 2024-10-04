#include<iostream>
int main(){
	int num , ornum , i , sum=0 ;
	printf("ENTER A NUMBER\n");
	scanf("%d",&num);
	ornum = num ;
	while(num !=0){
		i = num % 10 ;
		sum += i * i * i ;
		num /= 10 ;
	}
	if(ornum==sum){
		printf("\nNUMBER IS ARMSTRONG NUMBER");
	}
	else{
		printf("NOT AN ARMSTRONG NUMBER");
	}
	return 0 ;
}
