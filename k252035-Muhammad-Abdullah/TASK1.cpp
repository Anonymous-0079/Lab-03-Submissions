#include <stdio.h>

int main() {
    char C_name[50];
    int units;
    float price_per_unit, total_bill;

    // Input
    printf("Enter Customer Name: ");
    fgets(C_name, sizeof(C_name), stdin);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    printf("Enter Price per Unit: ");
    scanf("%f", &price_per_unit);

    // Process
    total_bill = units * price_per_unit;

    // Output
    printf("\nELECTRICITY BILL\n");
    printf("Customer: %s", C_name);
    printf("Units Consumed: %d\n", units);
    printf("Price per Unit: %.2f\n", price_per_unit);
    printf("Total Bill: %.2f PKR\n", total_bill);

    return 0;
}



