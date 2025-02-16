#include <stdio.h>
int main()
{
    char name[50];
    int id;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter the last 6 digits of your ID: ");
    scanf("%d", &id); // Read the last 6 digits of the ID

    // Extract first character of name and its ASCII value
    char firstLetter = name[0];
    int asciiValue = (int)firstLetter; // Convert char to integer (ASCII)

    // Extract the last digit of the ID
    int lastDigit = id % 10; // Extracts the last digit

    // Displaying results
    printf("\n--- OUTPUT ---\n");
    printf("Your Name: %s\n", name);
    printf("First Letter of Your Name: %c\n", firstLetter);
    printf("ASCII Value of '%c': %d\n", firstLetter, asciiValue);
    printf("Last Digit of Your ID: %d\n", lastDigit);


    return 0;
}

