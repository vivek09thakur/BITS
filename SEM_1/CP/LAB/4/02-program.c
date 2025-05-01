// 202419TW021 VIVEK KUMAR
#include <stdio.h>

int main()
{
    int i = 10;
    int *p = &i;
    printf("%d\n", *p);
    printf("%u\n", p);
    printf("%u\n", &i);
    printf("%u\n", &p);
}
