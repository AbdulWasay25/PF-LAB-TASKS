#include<stdio.h>

int sumdigit(int n ){
	if(n==0){
		return 0;
	}else{

		return (n%10)+sumdigit(n/10);
	}
}
int main(){
	int n;
	printf("ENTER ANY NUMBER : ");scanf("%d",&n);
	int sum=sumdigit(n);
	printf("\nTHE SUM OF %d IS %d",n,sum); 
}