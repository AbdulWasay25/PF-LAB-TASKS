#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Invoice{
	char partnum[50];
	char description[100];
	int quantity;
	float price;
};

int main()
{
	struct Invoice memo;
	printf("Enter Part Number: ");
	scanf(" %s", memo.partnum);
	printf("Enter Description: ");
	scanf(" %[^\n]", memo.description);
	printf("Enter Quantity: ");
	scanf("%d", &memo.quantity);
	printf("Enter Price: ");
	scanf("%f", &memo.price);
	float amount;
	amount = memo.quantity * memo.price;
	if(memo.quantity < 0)
	{
		amount = 0;
	}
	else if(memo.price < 0)
	{
    	amount  = memo.price * memo.quantity; 
    }
    
    printf("Amount : %d", amount);
}