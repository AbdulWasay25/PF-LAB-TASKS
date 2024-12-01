#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a;
	printf("Enter Number of Elements : ");
	scanf("%d",&a);
	int *array;
	array=(int*)malloc(a*sizeof(int));
	for(int i=0;i<a;i++){
		printf("\n Enter element %d : ",i+1);
		scanf("%d",&array[i]);
		if(array[i]%2 != 0){
			array[i]-=1;
		}
	}
	printf("\nEven Array:\n");
	for(int i=0;i<a;i++){
		printf("\n Element %d : %d",i+1,array[i]);
	}
	free(array);
	
}