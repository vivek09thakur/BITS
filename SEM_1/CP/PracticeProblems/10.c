// Enter marks of five subjects and calculate total, average, and percentage
#include <stdio.h>

int main()
{
    int n = 5;
    float marks[n], total = 0;
    printf("Enter the marks of the following subjects:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Marks in Subject %d =", i + 1);
        scanf("%f", &marks[i]);
    }

    for (int i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    printf("Total marks obtained = %f", total);

    return 0;
}