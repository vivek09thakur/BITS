// 202419TW021 VIVEK KUMAR
#include <stdio.h>

struct book
{
    char title[20];
    float price;
};

int main()
{
    struct book b1 = {"C Programming", 299.50};
    struct book *ptr;
    ptr = &b1;
    puts(ptr->title);	// Display book title using pointer
    printf("%.2f", ptr->price); // Display book price using pointer
    return 0;
}
