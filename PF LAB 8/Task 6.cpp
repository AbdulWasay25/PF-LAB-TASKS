#include<stdio.h>
int main(){
	int n=0 ;
	printf("ENTER LENGTH\n");
	scanf("%d",&n);
	char pattern[n][n]; 
	for(int i=0 ; i<n;i++){
		for(int j=0;j<n;j++){	
		    if((i==(n/2)-1 || i==(n/2)+1) && j==n/2){
		    	pattern[i][j]=' ';
			}
			else if(i==n/2 && (j==(n/2)-1 || j==(n/2)+1)){
				pattern[i][j]=' ';
			}
			else{
				pattern[i][j]='*';
			}}
			}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf(" %c ",pattern[i][j]);}
	printf("\n");
	}
}