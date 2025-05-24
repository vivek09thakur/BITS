// Numbers not divisble by 2,3 or 5
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the starting and ending point a and b respectively: \n");
    scanf("%d %d", &a, &b);

    if (b > a)
    {
        printf("Numbers between %d and %d not divisible by 2, 3, or 5 are:\n", a,b);
        for(int i = a; i<=b; i++){
            if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("starting point must be smaller than ending point");
    }

    return 0;
}