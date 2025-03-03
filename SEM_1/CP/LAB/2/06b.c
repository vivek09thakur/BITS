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

    // Calculate factorial of n1
    int factorial1 = 1;
    int temp1 = n1;
    if (n1 >= 0)
    {
        do
        {
            factorial1 *= temp1;
            temp1--;
        } while (temp1 > 0);
    }
    else
    {
        factorial1 = 0; // Factorial is not defined for negative numbers
    }

    // Calculate factorial of n2
    int factorial2 = 1;
    int temp2 = n2;
    if (n2 >= 0)
    {
        do
        {
            factorial2 *= temp2;
            temp2--;
        } while (temp2 > 0);
    }
    else
    {
        factorial2 = 0; // Factorial is not defined for negative numbers
    }

    // Print factorial results
    printf("Factorial of %d is %d\n", n1, factorial1);
    printf("Factorial of %d is %d\n", n2, factorial2);

    return 0;
}