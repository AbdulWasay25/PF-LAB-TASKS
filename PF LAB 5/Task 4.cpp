#include<stdio.h>
int main(){
	int amount ;
	char memsh , y , n ;
	printf("DO YOU HAVE MEMBERSHIP?...y FOR YES , n FOR NO \n");
	scanf(" %c",&memsh);
	printf("\nENTER AMOUNT\n");
	scanf("%d",&amount);
	printf("\n BILL = %d \n",amount);
	memsh=='n'? printf("No Membership No Discount") : 
	 amount>100? printf("ELIGIBLE FOR DISCOUNT") : printf("No Discount For bills below $100") ;
	return 0;
}
