#include<stdio.h>
#include<string.h>

struct employees{
	int empID=0;
	char name[50]={0};
	char depart[50]={0};
	float salary=0.00;
};
void inputinfo(struct employees array[],int n){
		for(int i=0 ; i<n;i++){
		printf("\n Enter details of Employee %d\n",i+1);
		printf("Employee ID: "); scanf("%d",&array[i].empID);
		printf("Name: "); scanf("%s",array[i].name);
		printf("Department: "); scanf(" %s",array[i].depart);
		printf("Salary: "); scanf("%f",&array[i].salary);
	}
};

int main(){
	char choice ;int n  ; printf("ENTER NUMBER OF EMPLOYEES TO BE STORED : "); scanf("%d",&n);
    struct employees data[n]; 
    inputinfo(data,n);
    printf("\nDATA ENTERED SUCCESFULLY"); 
	return 0;
	}
	 
