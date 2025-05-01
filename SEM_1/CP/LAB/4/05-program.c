// 202419TW021 VIVEK KUMAR
#include <stdio.h>

void main()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    printf("%p\t%p \n", p, a);
    printf("%d %d %d \n",a[0], a[1], a[2]);
    printf("%d %d %d \n",*p, *p+1, *p+2);
    printf("%d %d %d \n",*a, *a+1, *a+2);
}
