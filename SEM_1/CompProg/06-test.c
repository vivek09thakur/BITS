#include <stdio.h>
int main() 
{
    char name[50]; 
    int id;        
    printf("Enter your Name: ");
    scanf("%s", name); 
    printf("Enter the last 6 digits of your ID: ");
    scanf("%d", &id);

    // Extract first character of name and its ASCII value
    char firstLetter = name[0];
    int asciiValue = (int)firstLetter;
    
    // Get the next character after first letter
    char nextChar = firstLetter + 1;
    
    // Extract the last digit of the ID
    int lastDigit = id % 10;
    // Get the previous number of the last digit
    int prevNumber = (lastDigit == 0) ? 9 : lastDigit - 1;

    // Displaying results
    printf("\n--- OUTPUT ---\n");
    printf("Your Name: %s\n", name);
    printf("First Letter of Your Name: %c\n", firstLetter);
    printf("ASCII Value of '%c': %d\n", firstLetter, asciiValue);
    printf("Next Character after '%c': %c\n", firstLetter, nextChar);
    printf("Last Digit of Your ID: %d\n", lastDigit);
    printf("Previous Number of %d: %d\n", lastDigit, prevNumber);
    
    return 0;
}