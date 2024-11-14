#include<stdio.h>

float percent(int n , int x){
	float per=0;
	if(x>100){
		return 0;
	}else{
		per= (x*n)/100 ;
		printf("%d percent = %.2f \n",x,per);
		return percent(n , x+1);
	}
}
int main(){
	int n;
	printf("ENTER A VALUE TO SPLIT IN PERCENTAGE : ");
	scanf("%d",&n);
	percent(n , 1);
	return 0;
}
