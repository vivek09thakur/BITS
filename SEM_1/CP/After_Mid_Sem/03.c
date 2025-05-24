#include <stdio.h>
// #include<string.h>

// int mystrlen(char str[])
// {
//     int length = 0;
//     while (str[length] != '\0'){ length++;}
//     return length;
// }

// int main()
// {
//     int len;
//     char s1[] = "Hello";
//     len = mystrlen(s1); // Using the user-defined function
//     printf("Length = %d", len);
//     return 0;
// }


int mystrlen(char *str)
{
    int length = 0;
    while (*(str + length) != '\0') { 
        length++; 
    }
    return length;
}

int main()
{
    int len;
    char s1[] = "WASE";
    len = mystrlen(s1); 
    printf("Length = %d", len);
    return 0;
}