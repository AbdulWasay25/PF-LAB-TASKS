#include <stdio.h>
int maxPieces(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -1;
    }
    int cut1 = maxPieces(n - 1);
    int cut2 = maxPieces(n - 2);
    int cut3 = maxPieces(n - 3);
    int maxCut = cut1;
    if (cut2 > maxCut) {
        maxCut = cut2;
    }
    if (cut3 > maxCut) {
        maxCut = cut3;
    }
    if (maxCut == -1) {
        return -1;
    }
    return maxCut + 1;
}
int main() {
    int ropeLength;
   printf("Enter the length of the rope: ");
    scanf("%d", &ropeLength);
    int result = maxPieces(ropeLength);
    if (result == -1) {
        printf("It's not possible to cut the rope into pieces of length 1, 2, or 3 units.\n");
    } else {
        printf("The maximum number of pieces the rope can be cut into is %d.\n", result);
    }
    return 0;
}
