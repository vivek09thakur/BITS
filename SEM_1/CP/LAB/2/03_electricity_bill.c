#include <stdio.h>

float calculateBill(int units)
{
    float bill = 0;

    if (units == 0)
    {
        return 50;
    }

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + ((units - 100) * 8);
    }
    else
    {
        bill = (100 * 5) + (200 * 8) + ((units - 300) * 10);
    }

    bill += 100;

    if (bill > 2000)
    {
        bill = bill * 0.95;
    }

    return bill;
}

int main()
{
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid input! Units cannot be negative.\n");
    }
    else
    {
        float total = calculateBill(units);
        printf("Total Bill Amount: ₹%.2f\n", total);
    }

    return 0;
}
