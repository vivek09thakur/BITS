// 202419TW021 VIVEK KUMAR
#include <stdio.h>
int main()
{
    int num[] = {10, 20, 30, 45, 67, 56, 74};
    int *p1, *p2;
    p1 = &num[0];
    p2 = &num[6];
    printf("%d, %d", p2 - p1, *p2 - *p1);
    return 0;
}
