#include<stdio.h>
#include<string.h>
int main(){
    int flag=0;
	char list[5][100]={"ABDUL WASAY","UMAIS MUSTAFA","AMMAR AHMED","DANI AHMED","ABDUL RAFAY"};
	char input[100];
	printf("ENTER FULL NAME TO CHECK\n"); 
	fgets(input,sizeof(input),stdin);
	input[strcspn(input, "\n")] = '\0';
	for(int i=0; i<5;i++){
		if(strcmp(list[i] , input )==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
	printf("\nNAME NOT FOUND");}
	else{
	printf("\nNAME FOUND");}
}