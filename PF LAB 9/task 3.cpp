#include<stdio.h>
#include<string.h>
int main(){
	const char *user="admin";
	const char *pass="1234";
	char iuser[10] , ipass[10];
	printf("ENTER USERNAME: ");
	scanf("%s",iuser);
	printf("\nENTER PASSWORD: ");
	scanf("%s",ipass);
	if(strcmp(user , iuser)==0 && strcmp(pass , ipass)==0){
		printf("\nACCESS GRANTED");
	}
	else{
		printf("\nACCESS NOT GRANTED");
	}
}
