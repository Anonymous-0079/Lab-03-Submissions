#include <stdio.h>

int main() {
    float eggs, bread, butter;
    float subtotal, tax, grand_total;

    // Input
    printf("Enter price of Eggs: ");
    scanf("%f", &eggs);

    printf("Enter price of Bread: ");
    scanf("%f", &bread);

    printf("Enter price of Butter: ");
    scanf("%f", &butter);

    // Process
    subtotal = eggs + bread + butter;
    tax = subtotal * 0.17;  
    grand_total = subtotal + tax;

    // Output
    printf("Item 1: %.2f\n", eggs);
    printf("Item 2: %.2f\n", bread);
    printf("Item 3: %.2f\n", butter);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax (17%%): %.2f\n", tax);
    printf("Grand Total: %.2f\n", grand_total);

    return 0;
}

