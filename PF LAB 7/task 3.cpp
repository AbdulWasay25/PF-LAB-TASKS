#include<stdio.h>
int main(){
	int element  ;
	int array_1[12] , sumarray[6];
	printf("ENTER 12 ELEMENTS FOR ARRAY \n");
	for(int i=0 ; i<12 ; i++){
		scanf("%d",&element);
		array_1[i]=element ;
	}
	for(int i=0 ; i<12 ; i++){
		printf(" %d ",array_1[i]);
		}
		printf("\n");
	for(int i=0 ; i<6 ; i++){
		sumarray[i]= array_1[i*2] + array_1[i*2+1] ;
		printf(" %d ",sumarray[i]);
	}
	return 0;
}
