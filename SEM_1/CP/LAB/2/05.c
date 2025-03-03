#include <stdio.h>
int main()
{
    int choice;
    int count = 1;
    printf("\n=== Menu Program ===\n");
    printf("1. Print a message\n");
    printf("2. Show current loop count\n");
    printf("0. Exit the loop\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Hello! This is an infinite loop.\n");
        break;
    case 2:
        printf("Loop count: %d\n", count);
        count++;
        break;
    case 0:
        printf("Exiting the loop...\n");
        break; // Exit the loop
    default:
        printf("Invalid choice! Try again.\n");
    }
    printf("Program terminated successfully.\n");
    return 0;
}
