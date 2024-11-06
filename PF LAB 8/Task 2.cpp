#include<stdio.h>
int main(){
	int matrix[4][4];
	printf("ENTER MARKS\n");
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			scanf(" %d ",&matrix[i][j]);
		}
	}
	for(int i=0 ; i<4 ; i++){
		printf("|");
		for(int j=0 ; j<4 ; j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("|");
		printf("\n");
	}
	for(int i=0 ; i<4  ; i++ ){
		for(int j=0 ; j<4 ; j++)
			if(matrix[i][j]<0){
				matrix[i][j]=0;
			} 
		}
	printf(" \nTHE CORRECTED ARRAY IS : \n");
		for(int i=0 ; i<4 ; i++){
		printf("|");
	    for(int j=0 ; j<4 ; j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("     |");
		printf("\n");
}
}
