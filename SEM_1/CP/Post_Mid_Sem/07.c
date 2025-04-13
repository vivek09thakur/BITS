#include <stdio.h>
#include <string.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

void inputBook(struct Book *book, int bookNumber) {
    printf("Enter details for Book %d:\n", bookNumber);
    printf("Title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0';

    printf("Author: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strcspn(book->author, "\n")] = '\0';

    printf("Price: ");
    scanf("%f", &book->price);
    getchar();
}

int main()
{
    struct Book book1, book2;

    inputBook(&book1, 1);
    inputBook(&book2, 2);

    struct Book *mostExpensive = (book1.price > book2.price) ? &book1 : &book2;
    
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive->title);
    printf("Author: %s\n", mostExpensive->author);
    printf("Price: $%.2f\n", mostExpensive->price);

    return 0;
}