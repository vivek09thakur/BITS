#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    float cost;
    char name[10];
} __attribute__((packed));

// Function to read product details
inline void readProduct(struct Product *p) {
    printf("Enter product ID: ");
    scanf("%d", &p->id);
    printf("Enter product cost: ");
    scanf("%f", &p->cost);
    printf("Enter product name: ");
    scanf("%s", p->name);
}

// Function to display product details
inline void displayProduct(const struct Product p) {
    printf("\nProduct Details:\n"
           "ID: %d\n"
           "Cost: %.2f\n"
           "Name: %s\n", p.id, p.cost, p.name);
}

int main() {
    struct Product p;
    readProduct(&p);
    displayProduct(p);
    return 0;
}