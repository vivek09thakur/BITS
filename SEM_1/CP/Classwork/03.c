#include <stdio.h>

int BIG(int x, int y, int z) {
    if (x >= y && x >= z) return x;
    if (y >= x && y >= z) return y;
    return z;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("The biggest number is: %d\n", BIG(x, y, z));
    return 0;
}