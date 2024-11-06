#include<stdio.h>
int main(){
	int matrix[4][4]  ;
	printf("ENTER SCORES OF TEAMS \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&matrix[i][j]);}}
	for(int i=0;i<4;i++){
		printf("| ");
		for(int j=0;j<4;j++){
			printf("%-3d",matrix[i][j]);}
		printf("  |\n");}
	for (int i = 0; i < 4; i++) {
	    for (int j = 0; j < 4 - 1; j++) {
		    for (int k = 0; k < 4 - j - 1; k++) {
			    if (matrix[k][i] > matrix[k + 1][i]) {
			        int temp = matrix[k][i]; 
					matrix[k][i] = matrix[k + 1][i]; 
					matrix[k + 1][i] = temp; } } } }
	printf("\nTHE SORTED ARRAY IS\n");
	for(int i=0;i<4;i++){
		printf("| ");
		for(int j=0;j<4;j++){
			printf("%-3d",matrix[i][j]);}
	printf("  |\n");
	}}