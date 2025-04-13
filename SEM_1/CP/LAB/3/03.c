// VIVEK KUMAR 202419TW021
#include <stdio.h>

//int sumOfDigits(int n){
//    if (n == 0){
//        return 0;
//    }else{
//        return (n % 10) + sumOfDigits(n / 10);
//    }
//}
int sumOfDigits(int n) {
    if (n < 0) {
        return sumOfDigits(-n);  // Convert negative to positive
    }
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main()
{
    int num = -123;
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
    return 0;
}
