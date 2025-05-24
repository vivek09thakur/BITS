// Create a simple calculator using if-else or conditional logic
#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error! Division by zero\n");
            return 1;
        }
        result = num1 / num2;
    } else {
        printf("Error! Invalid operator\n");
        return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    return 0;
}