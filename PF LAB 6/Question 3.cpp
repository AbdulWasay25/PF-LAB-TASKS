#include <stdio.h>
int main() {
    int num;
    do {
        printf("ENTER A NUMBER : ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("\nNO\n ");
        }
    } while (num <= 0); 
    printf("%d IS CORRECT INPUT \n", num);
}

