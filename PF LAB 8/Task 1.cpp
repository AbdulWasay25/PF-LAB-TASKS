#include<stdio.h>
int main(){
	int rsum , csum;
	int matrix[3][3];
	printf("ENTER SCORES\n");
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			scanf(" %d ",&matrix[i][j]);
		}
	}
	for(int i=0 ; i<3 ; i++){
		printf("|");
		for(int j=0 ; j<3 ; j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("THE ROW WISE SUM IS : \n");
	for(int i=0 ; i<3 ; i++){
		rsum=0;
		for(int j=0 ; j<3 ; j++){
			rsum += matrix[i][j] ;
		}
		printf("\n SUM ROW%d = %d",i+1 , rsum);
	}
	printf(" \nTHE COLUMN WISE SUM IS :");
	for(int i=0 ; i<3 ; i++){
		csum=0;
		for(int j=0 ; j<3 ; j++){
			csum += matrix[j][i] ;
		}
		printf("\n SUM COLUMN%d = %d",i+1 , csum);
	}
}
