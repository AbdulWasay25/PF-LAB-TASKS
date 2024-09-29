#include<iostream>
int main(){
	int time ;	
	//time in 24 hour format
	printf(" ENTER TIME in 24 HOUR FORMAT \n");
	scanf("%d",&time);
	if(0<=time<=24){
		if(time>=6 && time<12){
			printf("GOOD MORNING");
		}
		else if(time>=12 && time<18){
			printf("GOOD AFTERNOON");
		}
		else if(time>=18 && time<24){
			printf("GOOD EVENING");
		}
		else if(time>=0 && time<6){
			printf("GOOD AFTERNOON");
		}
	
	else {
	printf("ERROR...INVALID TIME");
}
}
	return 0;
}