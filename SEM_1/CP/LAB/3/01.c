// VIVEK KUMAR 202419TW021
#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return 0;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}