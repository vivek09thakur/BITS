#include <stdio.h>
int main()
{
    char name[50];
    int id;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter the last 6 digits of your ID: ");
    scanf("%d", &id);


    char firstLetter = name[0];
    int asciiValue = (int)firstLetter;
    char nextChar = firstLetter + 1;
    int lastDigit = id % 10;
    int prevNumber = lastDigit - 1;

    printf("\n--- OUTPUT ---\n\n\n");
    printf("Your Name: %s\n\n", name);
    printf("First Letter of Your Name: %c\n\n", firstLetter);
    printf("ASCII Value of '%c': %d\n\n", firstLetter, asciiValue);
    printf("Next Character after '%c': %c\n\n", firstLetter, nextChar);
    printf("Last Digit of Your ID: %d\n\n", lastDigit);
    printf("Previous Number before %d: %d\n\n", lastDigit, prevNumber);

    return 0;
}
