// Store values in an integer array and print them
#include <stdio.h>

int main()
{
    int n, element;

    printf("Enter the lenght of array = ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the  %d element of array = ", i);
        scanf("%d", &element);
        arr[i] = element;
    }

    printf("Element of arrays are: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}