// NAME: VIVEK KUMAR
// ID : 202419TW021
#include <stdio.h>
int main()
{
    int num;
    printf("Key in the value for num\n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Positive Number\n");
    }
    else if (num < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}