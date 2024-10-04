#include <stdio.h>
int main() {
    int num  , mod1 , prinum = 1 ;
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
		    }     }
    if (prinum==0){
    	printf("GIVEN NUMBER IS NOT PRIME");
	}
	else{
		printf("GIVEN NUMBER IS PRIME");
	}
    return 0;
}

