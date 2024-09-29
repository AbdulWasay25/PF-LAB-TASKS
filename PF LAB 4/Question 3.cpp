#include<iostream>
int main(){
	int item_cost , RsSaved , discountedprice ;	
	printf("ENTER THE COST OF ITEMS  \n Rs. ");
	scanf("%d",&item_cost);
	if(item_cost<=1500){
		RsSaved=item_cost * 0.07;
		printf("\nYOU SAVED Rs. %d",RsSaved);
		discountedprice = item_cost - RsSaved ;
		printf("\nYOU HAVE TO PAY Rs. %d", discountedprice);
	}
	else if(item_cost>1500 && item_cost<=3000){
		RsSaved = item_cost * 0.12;
		printf("\nYOU SAVED Rs. %d",RsSaved);
		discountedprice = item_cost - RsSaved ;
		printf("\nYOU HAVE TO PAY Rs. %d",discountedprice);
	}
	else if(item_cost>3000 && item_cost<=5000){
		RsSaved=item_cost * 0.22;
		printf("\nYOU SAVED Rs. %d",RsSaved);
		discountedprice = item_cost - RsSaved ;
		printf("\nYOU HAVE TO PAY Rs. %d",discountedprice);
	}
	else {
		RsSaved=item_cost * 0.30;
		printf("\nYOU SAVED Rs. %d ",RsSaved);
		discountedprice = item_cost - RsSaved ;
		printf("\nYOU HAVE TO PAY Rs. %d",discountedprice);
	}
	return 0;
}