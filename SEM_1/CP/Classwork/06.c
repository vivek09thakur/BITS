// TASK 6 : find largest number among three number using nested if 
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            printf("%d is the largest number\n", a);
        }
    }
    if (b >= a) {
        if (b >= c) {
            printf("%d is the largest number\n", b);
        }
    }
    if (c >= a) {
        if (c >= b) {
            printf("%d is the largest number\n", c);
        }
    }
    return 0;
}