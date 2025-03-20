// Write a program to find if number is palindrome or not
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int temp = n;
    int sum = 0;
    while ( n > 0)
    {
        sum = sum * 10 + n % 10;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}