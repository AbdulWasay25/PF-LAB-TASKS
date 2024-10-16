#include<iostream>
int main(){
	int num , min , max=0 ; 
	int myarray[10] ;
	printf("ENTER ARRAY ELEMENTS\n");
	for(int i=0 ; i<10 ; i++ ){
		scanf("%d",&num);
		myarray[i]= num ;
	}
	for(int i=0 ; i<10 ; i++ ){
		if(max<myarray[i]){
			max = myarray[i] ;
		}
	}
	min=myarray[0];
	for(int i=1 ; i<10 ; i++ ){
		if(min>myarray[i]){
			min = myarray[i] ;
		}
	}
	printf("\nMAX = %d",max);
	printf("\nMIN = %d",min);
}
