// Enter the radius of a circle and find its diameter, circumference, and area
#include <stdio.h>

int main()
{
    float r, area, dia, circum, pie = 3.14;
    printf("Enter the radius of circle = ");
    scanf("%f", &r);

    printf("Diameter of circle = %f\n", 2 * r);
    printf("Area of circle = %f\n", pie * r * r);
    printf("Circumference of circle = %f\n", 2 * pie * r);

    return 0;
}