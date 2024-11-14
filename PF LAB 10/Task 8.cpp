#include<stdio.h>
#include<string.h>
void printarray(int array[], int size){
    //int i=0;
	if(size==0){
        return ;
        }
    else{
    	printf("%d ",array[0]);
        return printarray(array+1 , size-1);
        }
    }
int main(){
	int size;
	printf("Enter Size Of Array : ");
	scanf("%d",&size);
    int array[size];
    printf("ENTER ELEMENTS OF ARRAY\n");
    for(int i=0;i<size;i++){
    	scanf("%d",&array[i]);
	}
	printarray(array, size);
}
