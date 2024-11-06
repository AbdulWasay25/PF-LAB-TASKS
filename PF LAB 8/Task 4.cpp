#include<stdio.h>
int main(){
	int m=0  , n=0 ;
	printf("ENTER ORDER OF MATRIX : \nROWS = ");
	scanf("%d",&m);
	printf("\nCOLUMNS = ");
	scanf("%d",&n);	
	int mat1[m][n] ;
	int mat2[m][n];
	int sum[m][n] ;
	printf("\nENTER ELEMENTS FOR FIRST MATRIX\n");
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nMATRIX 1 \n");
	for(int i=0; i<m; i++){
		printf("|");
		for(int j=0; j<n; j++){
			printf("%i ",mat1[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	printf("\nENTER ELEMENTS FOR SECOND MATRIX\n");
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			scanf("%d",&mat2[i][j]);
		}	
	} 
	printf("\nMATRIX 1 \n");
	for(int i=0; i<m; i++){
		printf("|");
		for(int j=0; j<n; j++){
			printf("%d ",mat1[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("\nMATRIX 2 \n");
	for(int i=0 ; i<m ; i++){
		printf("|");
		for(int j=0 ; j<n ; j++){
			printf(" %d ",mat2[i][j]);
		}
		printf("|");
		printf("\n");
	}
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			sum[i][j]=mat1[i][j] + mat2[i][j];
		}
	}
	printf("\nADDED MATRIX \n");
	for(int i=0 ; i<m ; i++){
		printf("|");
		for(int j=0 ; j<n ; j++){
			printf(" %d ",sum[i][j]);
		}
		printf("|");
		printf("\n");
	}
	return 0;
}