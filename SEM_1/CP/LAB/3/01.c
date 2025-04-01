<<<<<<< HEAD
#include<stdio.h>
    int
    factorial(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
=======
// VIVEK KUMAR 202419TW021
#include <stdio.h>
int factorial(int n) {
    if (n == 1) {
//        return 0;
        return 1; // fixes
    } else {
>>>>>>> 50dd6a3ef7b2d5b6ff3200bc2179c70203c2c183
        return n * factorial(n - 1);
    }
}

<<<<<<< HEAD
int main()
{
=======
int main() {
>>>>>>> 50dd6a3ef7b2d5b6ff3200bc2179c70203c2c183
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}
