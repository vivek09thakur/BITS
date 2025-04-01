// Program for a user-defined function to copy a string
#include <stdio.h>

void mystery(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[] = "Hello";
    char destination[50];

    mystery(destination, source);
    printf("Copied string: %s\n", destination);

    return 0;
}