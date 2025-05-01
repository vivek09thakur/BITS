// 202419TW021 VIVEK KUMAR
#include <stdio.h>
#include <string.h>

void main()
{
    int *p = "SAP";
    puts(p);

    char *s = "hello";
    char *q = s;
    printf("%c\t%c", q[0], s[1]);
}
