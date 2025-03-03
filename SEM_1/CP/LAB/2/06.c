// NAME: VIVEK KUMAR
// ID : 202419TW021
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (int i = n1 + 1; i < n2; i++)
    {
        printf("%d ", i);
    }
}