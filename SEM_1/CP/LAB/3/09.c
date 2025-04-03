// VIVEK KUMAR 202419TW021
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    return 0;
}
