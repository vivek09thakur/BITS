// write a program to find if number is armstrong or not
#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (temp == sum)
        printf("Armstrong");
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}