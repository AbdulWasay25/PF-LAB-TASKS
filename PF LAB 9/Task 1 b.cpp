#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d", j);
        }
        for (int k = i - 1; k >= 1; k--){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}