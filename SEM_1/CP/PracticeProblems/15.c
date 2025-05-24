// Find if a given number is odd or even using the conditional operator
#include <stdio.h>

int main()
{
    float num;
    printf("Enter a number = ");
    scanf("%f", &num);

    if (num / 2 == 0)
    {
        printf("%f is even", num);
    }
    else
    {
        printf("%f is odd", num);
    }

    return 0;
}