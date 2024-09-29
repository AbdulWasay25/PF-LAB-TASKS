#include<iostream>
int main(){
	int units ; 
    int bill ;
	bill =0.00 ;
	printf("ENTER YOUR ELECTRICITY UNITS \n");
	scanf("%d",&units);
	if(units<=0){
		printf("STILL TAX WILL BE IMPOSED");
	}
	else if(units>0 && units<=30){
		bill=units*0.60;
		printf("YOUR BILL IS RS %d",bill);
	}
	else if(units>30 && units<=110){
		bill=units*0.85;
		printf("YOUR BILL IS Rs. %d",bill);
	}
	else if(units>110 && units<=210){
		bill=units*1.30;
		printf("YOUR BILL IS Rs. %d",bill);
	}
	else {
	bill=units*1.6;
	printf("YOUR BILL IS Rs. %d",bill);}
	return 0;
}