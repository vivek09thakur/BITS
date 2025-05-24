// Find the biggest among three numbers using the conditional operator
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers = ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a is the biggest");
    }
    else if (b > a && b > c)
    {
        printf("b is the biggest");
    }
    else
    {
        printf("c is the biggest");
    }

    return 0;
}