#include <stdio.h>

int getFactorial(int n) {
    // if (n == 0 || n == 1) {
    //     return 1;
    // } else {
    //     return n * getFactorial(n - 1);
    // }
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    int factorial = getFactorial(n);

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}
