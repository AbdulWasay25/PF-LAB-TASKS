#include<stdio.h>
int main(){
	int bolt=0 , nut=0 , washer=0 ,cost=0;
	printf("NUMBER OF BOLTS : ");
	scanf(" %d",&bolt);
	printf("\nNUMBER OF NUTS : ");
	scanf(" %d",&nut);
	printf("\nNUMBER OF WASHERS : ");
	scanf(" %d",&washer);
	printf("\nCHECK ORDER :");
	if(nut>=bolt && washer>=2*bolt){
		printf("\tOrder Is OK");
	}
	else if(nut<bolt ){
		printf("\tToo Few NUTS");
	}
	else if(washer<2*bolt){
		printf("\tToo Few WASHER");
	}
	cost= (5*bolt) + (3*nut)+ (washer);
	printf("\nCOST :\t%d",cost);
	
}
