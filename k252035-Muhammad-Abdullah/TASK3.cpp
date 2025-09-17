#include <stdio.h>

int main() {
    float distance, fuel_used, price_per_litre;
    float efficiency, total_cost;

    // Input
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (liters): ");
    scanf("%f", &fuel_used);

    printf("Enter fuel price per liter: ");
    scanf("%f", &price_per_litre);

    // Process
    efficiency = distance / fuel_used;      // km per litre
    total_cost = fuel_used * price_per_litre;

    // Output
	printf("FUEL REPORT\n");
    printf("Distance Travelled: %.2f km\n", distance);
    printf("Fuel Used: %.2f liters\n", fuel_used);
    printf("Fuel Efficiency: %.2f km/l\n", efficiency);
    printf("Total Fuel Cost: %.2f PKR\n", total_cost);

    return 0;
}

