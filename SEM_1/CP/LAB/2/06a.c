// NAME: VIVEK KUMAR
// ID : 202419TW021
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int i = 2;
    int isPrime1 = 1;
    while (i <= n1 / 2)
    {
        if (n1 % i == 0)
        {
            isPrime1 = 0;
            break;
        }
        i++;
    }
    if (n1 <= 1)
        isPrime1 = 0;

    // Check if n2 is prime
    i = 2;
    int isPrime2 = 1;
    while (i <= n2 / 2)
    {
        if (n2 % i == 0)
        {
            isPrime2 = 0;
            break;
        }
        i++;
    }
    if (n2 <= 1)
        isPrime2 = 0;

    // Print results
    printf("%d is %s\n", n1, isPrime1 ? "prime" : "not prime");
    printf("%d is %s\n", n2, isPrime2 ? "prime" : "not prime");

    return 0;
}