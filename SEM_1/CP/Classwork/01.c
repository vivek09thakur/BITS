#include<stdio.h>

#define PI 3.14

#define SQUARE(x) x*x

// macro big with 2 arguments
#define BIG(x, y) (x > y ? x : y)

int main(){
    int r;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    printf("Area of circle is %f\n", PI * SQUARE(r));

    return 0;
}