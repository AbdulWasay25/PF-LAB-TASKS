#include<stdio.h>

struct Rectangle{
	int length=0 , width=0;
};
int area(struct Rectangle rect){
	int area=0 ; 
	area=rect.length*rect.width;
	return area ;
	}
int perimeter(struct Rectangle rect){
	int perimeter=0;
	perimeter=2*(rect.length+rect.width);
	return perimeter;	
}
int check(struct Rectangle rect){
	return (rect.length>0 && rect.length<20 && rect.width>0 && rect.width<20);
}
int main(){
	struct Rectangle rect;
	printf("ENTER LENGTH AND WIDTH OF RECTANGLE\nLENGTH=");
	scanf("%d",&rect.length); printf("WIDTH="); scanf("%d",&rect.width);
	printf("\nAREA = %d",area(rect));
	printf("\nPERIMETER = %d",perimeter(rect));
	if(!check(rect)){
		printf("\nHowever Triangle Is Invalid");
	}else
	    printf("\nTriangle Is Valid");
}