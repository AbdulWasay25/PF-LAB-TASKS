#include <stdio.h>
int main() {
    int num  , mod1 , prinum = 1 , x=0 , y=1 , series;
        printf("ENTER A NUMBER ");
        scanf("%d", &num);
        if(num<2){
        	prinum = 0 ;
		}
		else{
            for (int i=2 ; i*i<=num ; i++) {
            mod1 =  num % i ;
                if ( mod1 == 0 ){
        	        prinum = 0;
        	        break ; }
		    }     } printf("INPUT IS : %d \n",num);
    if (prinum==1){
    	printf("GIVEN NUMBER IS PRIME\n");
    	printf("FIBONACCI SERIES FOR %d TERMS IS \n",num);
    	for( int i ; i<num ; i++ ){
    		printf("%d  ",x);
			series = x + y ;
    		x = y ;
    		y = series ;
		}
	}
	else{
		printf("GIVEN NUMBER IS NOT PRIME");
	}
    return 0;
}
