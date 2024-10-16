#include<stdio.h>
int main(){
	int num  ;
	int elmntsum[20] ;
	printf("ENTER VALUES FOR ARRAY \n");
	for(int i=0 ; i<20 ; i++){
		scanf("%d",&num);
		elmntsum[i]= num ;
	}
	for(int j=19 ; j>=0; j--){
		printf(" %d ",elmntsum[j]);
	}
	return 0;
}

