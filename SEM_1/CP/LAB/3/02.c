// VIVEK KUMAR 202419TW021
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num = 6;
    printf("Fibonacci number at position %d is: %d\n", num, fibonacci(num));
    return 0;
}
