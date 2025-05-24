// Convert centimetres into metres and kilometres
#include <stdio.h>

int main()
{
    float distance, km, meters;

    printf("Enter the distance (in cm) = ");
    scanf("%f", &distance);

    km = distance / 100000.0;
    meters = distance / 100.0;

    printf("%f cm = %f km and %f meters", distance, km, meters);

    return 0;
}
