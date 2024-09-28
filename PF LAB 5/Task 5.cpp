#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
/*binary representation of one is 1
for even numbers it ends on 0
while for odd numbers it ends on 1*/
 if ((num & 1) == 0)  
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
