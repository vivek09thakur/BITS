// NAME: VIVEK KUMAR
// ID : 202419TW021
#include <stdio.h>
int main()
{
    char op = '-';
    int a = 10, b = 5;
    // using switch case instead of if-else
    switch (op)
    {
    case '+':
        printf("Sum: %d\n", a + b);
        break;
    case '-':
        printf("Difference: %d\n", a - b);
        break;
    case '*':
        printf("Product: %d\n", a * b);
        break;
    case '/':
        printf("Quotient: %d\n", a / b);
        break;
    default:
        printf("Invalid Operator\n");
        break;
    }

    return 0;
}
