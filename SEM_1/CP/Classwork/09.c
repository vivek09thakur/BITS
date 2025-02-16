// TASK 9 : Biggest number among 3 using if else
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The numbers are: %d, %d, %d\n", a, b, c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is biggest", a);
        }
        else
        {
            printf("c is biggest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is biggest", b);
        }
        else
        {
            printf("c is biggest", c);
        }
    }
}