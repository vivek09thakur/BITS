// Convert Fahrenheit to Centigrade
#include <stdio.h>

int main(){
    float F,C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&F);
    C = (F - 32)/(9/5);
    printf("%f Fahrenheit = %f Celsius",F,C);

    return 0;
}