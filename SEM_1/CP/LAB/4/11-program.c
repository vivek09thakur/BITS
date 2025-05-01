// 202419TW021 VIVEK KUMAR
#include <stdio.h>
int main(void)
{
    int var1 = 5, var2 = 10;
    int *const ptr = &var1;
    // ptr = &var2; // This line is the error
    printf("%d\n", *ptr);

    return 0;
}

