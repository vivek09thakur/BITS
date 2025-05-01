// 202419TW021 VIVEK KUMAR
#include <stdio.h>
int main()
{
    int values[] = {5, 15, 25, 35, 45};
    int *ptr;
    ptr = values;

//    printf("%d", *ptr++); // Statement1
//    printf("%d",*++ptr) ; // Statement 2
//    printf("%d", *(ptr++)) ; // Statement3
//    printf("%d", *(++ptr)) ; // Statement 4
    printf("%d", ++*ptr) ; // Statement 5
    printf("\n%d", *ptr);

    return 0;
}
