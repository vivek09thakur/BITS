// HOMEWORK : MAKE A CALCULATOR IN C
// NAME : VIVEK KUMAR
// ID : 202419TW021
#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the operator: ");
    printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for remainder\n");
    printf("Enter the operator: ");
    scanf("%d", &op);

    while (op)
    {
        switch (op)
        {
        case 1:
            printf("a + b = %d\n", a + b);
            break;
        case 2:
            printf("a - b = %d\n", a - b);
            break;
        case 3:
            printf("a * b = %d\n", a * b);
            break;
        case 4:
            printf("a / b = %d\n", a / b);
            break;
        case 5:
            printf("a % b = %d\n", a % b);
            break;
        default:
            printf("Invalid operator");
            break;

            printf("Enter the operator: ");
            scanf(" %c", &op);
        }
    }
    return 0;
}
