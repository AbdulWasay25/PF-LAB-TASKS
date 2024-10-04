#include <stdio.h>
int main() {
    int value , sum = 0 ;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &value);
        if (value == 0) {
            break ;
			        }
        sum += value;
            printf("SUM = %d\n", sum);
    }
    printf("TEH FINAL SUM IS %d\n", sum);
    return 0;
}

