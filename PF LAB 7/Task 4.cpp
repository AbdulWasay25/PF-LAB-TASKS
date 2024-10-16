#include<stdio.h>
int main(){
	int num , sum=0 ;
	int elmntsum[15] ;
	printf("ENTER VALUES FOR ARRAY \n");
	for(int i=0 ; i<15 ; i++){
		scanf("%d",&num);
		elmntsum[i]= num ;
		sum += elmntsum[i];
	}
	printf("SUM OF ELEMENTS IS %d",sum);
	return 0;
}

