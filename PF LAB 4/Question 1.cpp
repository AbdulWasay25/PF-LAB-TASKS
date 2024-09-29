#include<stdio.h>
int main(){
	int marks;
    printf("ENTER YOUR MARKS\n");
    scanf("%d",&marks);
    if(marks>100 || marks<0){
    	printf("INVALID MARKS");
	}
    else if(marks>=90 && marks<=100){
    	printf("GRADE IS A");}
    	else if(marks>=80 && marks<90){
    		printf("GRADE IS B");
		}
		else if(marks>=70 && marks<80){
    		printf("GRADE IS C");
		}
		else if(marks>=60 && marks<70){
    		printf("GRADE IS D");
		}
		else{
			printf("F");
		}
		return 0;
	}

