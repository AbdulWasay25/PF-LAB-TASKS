#include<stdio.h>
int main(){
	int angle1 , angle2 , angle3 ;
	printf("ENTER THE ANGLES OF TRIANGLE \n");
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	if(angle1<1 || angle2<1 || angle3<1){
		printf("INPUT POSITIVE VALUES");
		return 0;
	}
	int sum = angle1 + angle2 + angle3 ;
	if(sum==180){
		printf("SUM = %d",sum);
		printf("\nTRIANGLE IS VALID");
		}
    else {
    printf("\nTRIANGLE IS NOT VALID");
	}
	return 0;
}
