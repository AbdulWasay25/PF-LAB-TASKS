#include<stdio.h>

void bubblesort(int array[],int n){
	if(n==1){
		return ;	
	}else {
		for(int i=0;i<n-1;i++){
			if(array[i]>array[i+1]){
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}}
	bubblesort(array,n-1);		
}
int printarray(int array[],int size){
	if(size==0){
		return 0;
	}else{
		printf("%d ",array[0]);
		printarray(array+1,size-1);
	}
};
int main(){
	int size=0; printf("ENTER THE SIZE OF ARRAY : ");scanf("%d",&size);
	int array[size];printf("ENTER THE ELEMENTS OF ARRAY : \n");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("THE UNSORTED ARRAY IS : \n");
	printarray(array,size);
	bubblesort(array,size);
	printf("\nTHE SORTED ARRAY IS : \n");
    printarray(array,size);
}