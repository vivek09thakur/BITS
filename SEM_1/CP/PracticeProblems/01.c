// Find the length of a string using pointers
#include <stdio.h>

int main(){
    char str[] = "Hello World";
    int length = 0;

    length = *(&str +1) - str -1;
    printf("Length of the string is %d\n", length);
    return 0;
}