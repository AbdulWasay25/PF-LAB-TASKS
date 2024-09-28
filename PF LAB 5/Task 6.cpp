#include<iostream>
int main(){
	int num , sum;
	printf("ENTER A NUBMBER BETWEEN 0 TO 15 \n");
	scanf("%d",&num);	
	//condition for validation of number
	if (num<0 || num>15){
		printf("ENTER NUM BETWEEN 0 AND 15");
		return 0;
    }
    //condition for sum of ONES 
	if((num & 1) == 1){
		sum = sum + 1;
	}
	if((num & 2) == 2){
		sum = sum + 1;
	}
		if((num & 4) == 4){
		sum = sum + 1;
	}
		if((num & 8) == 8){
		sum = sum + 1;
	}
	printf("\n SUM = %d",sum);
	return 0 ;
}
