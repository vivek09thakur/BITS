// TASK 3:  while purchasing certain items a discount of 20% if purchased quantity is more than 2000
#include <stdio.h>

float calculateTotalCost(int no_of_items, int price_per_items) {
    return no_of_items * price_per_items;
}

float calculateDiscount(float total_price, float discount) {
    return total_price - (total_price * discount / 100);
}

int main() {
    int no_of_items, price_per_items;
    printf("Enter the number of items: ");
    scanf("%d", &no_of_items);
    printf("Enter the price per item: ");
    scanf("%d", &price_per_items);
    
    float total_price = calculateTotalCost(no_of_items, price_per_items);
    printf("The total price is: %.2f\n", total_price);
    
    total_price = calculateDiscount(total_price, 20);
    printf("The total price after discount is: %.2f\n", total_price);
    return 0;
}