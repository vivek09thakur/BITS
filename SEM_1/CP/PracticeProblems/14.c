// Enter any number and calculate its square root
#include <stdio.h>
#include <math.h>

int main()
{
    float number, sqr_root;
    printf("Enter any number = ");
    scanf("%f", &number);

    sqr_root = sqrt(number);
    printf("Square root of %f = %f", number, sqr_root);

    return 0;
}