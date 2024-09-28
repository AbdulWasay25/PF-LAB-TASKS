#include<stdio.h>
int main(){
	int marks;
	printf("ENTER YOUR PRCENTAGE \n");
	scanf("%d",&marks);
	printf("PERCENTAGE = %d\n",marks);
	marks>=90? printf("GRADE IS A") : marks>=80? printf("GRADE IS B") : 
	marks>=70? printf("GRADE IS C") : marks>=60? printf("GRADE IS D") :
	 marks>=50? printf("GRADE IS E") : printf("FAIL");
	return 0;
}