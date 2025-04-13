// VIVEK KUMAR 202419TW021
#include <stdio.h>

int factorial(int n) {
<<<<<<< HEAD
    if (n == 1) {
        return 0;
=======
    if (n == 0 || n == 1) {  // fxing the condition
        return 1; // fixing the return value
>>>>>>> f28c3ed4cdff4d6c48b6bdb136ac475300efe6a2
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}