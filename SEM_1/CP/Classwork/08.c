// TASK 9 : Calculate median of three number 
#include <stdio.h>

void calculateMedian(int a, int b, int c) {
    int median;
    if (a >= b) {
        if (a <= c) {
            median = a;
        } else if (b >= c) {
            median = b;
        } else {
            median = c;
        }
    } else {
        if (a >= c) {
            median = a;
        } else if (b <= c) {
            median = b;
        } else {
            median = c;
        }
    }
    printf("The median is: %d\n", median);
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    calculateMedian(a, b, c);
    return 0;
}