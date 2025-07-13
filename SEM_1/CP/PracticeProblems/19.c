// Print a word if the input is a vowel
#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel detected!\n");
    }
    else
    {
        printf("Not a vowel.\n");
    }

    return 0;
}
