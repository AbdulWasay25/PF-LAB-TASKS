#include<stdio.h>
#include<string.h>
void myfunc(char array[], int index){
    if(index<0){
        return ;
        }
    else{
    	printf("%c",array[index]);
        myfunc(array , index-1);
        }
    }
int main(){
    char password[100];
    printf("ENTER CODE\n");
    fgets(password , sizeof(password),stdin);
    password[strcspn(password,"\n")]='\0';
	myfunc(password , strlen(password)-1);
}
