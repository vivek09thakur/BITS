// Task 7: using else if ladder find positive, negative or zero
#include <stdio.h>

void check_num(int num) {
    if (num > 0) {
        printf("The number is positive\n");
    } else if (num < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    check_num(num);
    return 0;
}