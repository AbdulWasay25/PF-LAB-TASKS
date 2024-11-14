#include<stdio.h>
#include<string.h>
void reversed(char string[], int index){
    if(index<0){
        return ;
        }
    else{
    	printf("%c",string[index]);
        reversed(string , index-1);
        }
    }
int main(){
    char string[100];
    printf("ENTER ANY STRING\n");
    fgets(string , sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
	reversed(string , strlen(string)-1);
}
