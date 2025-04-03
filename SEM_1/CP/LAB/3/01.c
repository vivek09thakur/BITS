// VIVEK KUMAR 202419TW021
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {  // fxing the condition
        return 1; // fixing the return value
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}
