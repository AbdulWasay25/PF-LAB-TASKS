#include<stdio.h>
#include<string.h>

struct cars{
	char make[15]={0};
	char model[15]={0};
	int year=0;
	int price=0;
	float mileage=0.00;
};
void userinput(struct cars array[],int n){
		for(int i=0 ; i<n;i++){
		printf("\n Enter details of Car %d\n",i+1);
		printf("Make: "); scanf("%s",array[i].make);
		printf("Model: "); scanf("%s",array[i].model);
		printf("Year: "); scanf("%d",&array[i].year);
		printf("Price: "); scanf("%d",&array[i].price);
		printf("Mileage: "); scanf("%f",&array[i].mileage);
	}
};
void displaycars(struct cars array[],int n){
		for(int i=0 ; i<n;i++){
		printf("\nCar %d Details :\n",i+1);
		printf("Make: %s\n",array[i].make);
		printf("Model: %s\n",array[i].model);
		printf("Year: %d\n",array[i].year);
		printf("Price: %d\n",array[i].price);
		printf("Mileage: %.2f\n",array[i].mileage);
}};
void search(struct cars array[],int n){
	int ss=0;printf("\nSearch Car By: Make(Press 0) or Model(Press 1)"); scanf("%d",&ss);
	char smake[15] , smodel[15] ; 
	if(ss==1){
		printf("\nENTER MODEL : "); scanf("%s",smodel);
	}else{
		printf("\nENTER MAKE : "); scanf("%s",smake);
	}
	for(int i=0;i<n;i++){
		if(ss==1 && strcmp(array[i].model,smodel)==0){
			printf("\nCAR FOUND AT INDEX %d",i+1);
			return ;
		}else if(ss==0 && strcmp(array[i].make,smake)==0){
			printf("\nCAR FOUND AT INDEX %d",i+1);
			return ;
		}
	}
	
};
int main(){
	char choice ;int n  ; printf("ENTER NUMBER OF CARS TO BE STORED : "); scanf("%d",&n);
    struct cars detail[n]; 
    while(1){
    printf("\nPress E To Enter New Cars , D To Display Available Cars , S for Search ,0 For Exit "); scanf(" %c",&choice);
	switch(choice){
    	case 'E':
    		userinput(detail,n); break;
    	case 'D':
    		displaycars(detail,n); break;
		case 'S' :
		    search(detail,n); break;
		default : printf("\nPROGRAM EXITED SUCCESFULLY"); return 0;	}
	}
	 
}
