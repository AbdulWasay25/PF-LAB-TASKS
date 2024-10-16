#include<stdio.h>
int main(){
	int num ;
	int array_sh[10];
	printf("ENTER ARRAY ELEMENTS\n");
	for(int i=0 ; i<10 ; i++){
		scanf("%d",&num);
		array_sh[i]=num;
	}
		for(int i=0 ; i<10 ; i++){
		printf(" %d ",array_sh[i]);
	}
	array_sh[10]=1;
	printf("\n");
	for(int i=0 , j=1 ; i<10 ; i++ , j++){
		array_sh[i]=array_sh[j];
		printf(" %d ",array_sh[i]);
	}
}
