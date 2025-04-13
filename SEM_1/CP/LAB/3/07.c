// VIVEK KUMAR 202419TW021
#include <stdio.h>

void my_fun(int arr[], int size);

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; // Variable-length array (VLA)

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array elements: ");
    my_fun(array, size);

    return 0;
}

void my_fun(int myarray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myarray[i]);
    }
    printf("\n");
}
