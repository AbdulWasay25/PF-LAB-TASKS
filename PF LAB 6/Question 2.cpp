#include<iostream>
int main(){
	int num , mod  ;
	printf("ENTER A POSITIVE INTEGER GREATER THAN ONE");
	scanf("%d",&num);
	int i=1 ;
	while(num>1 , i<=num){
		mod = i % 2;
		if(mod==0){
			printf("\n %d",i);
		}
		i++ ;
	}
}



