#include<stdio.h>
int main(){
	int array_1[]={25,2,7,9,23,20,46,15,10,4};
	int num , j;
	printf("ENTER A NUMBER TO CHECK\n");
	scanf("%d",&num);
	for(int i=0 ; i<10 ; i++){
		if(num==array_1[i]){
			printf("%d FOUND AT INDEX %d",num , i);
			j=array_1[i] ;
		}
	}
	if(num!= j){
		printf("INPUT NOT FOUND");
	}	
}
