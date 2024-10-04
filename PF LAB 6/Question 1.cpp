#include<iostream>
int main(){
	int num , product , factorial ;
	printf("ENTER A POSITIVE INTEGER");
	scanf("%d",&num);
	product=1;
	
	for(int i=1 ; num>0 , i<=num ; i++){
		product *= i ;
		factorial = product ;
	}
	printf("FACTORIAL = %d", factorial);
	
}


