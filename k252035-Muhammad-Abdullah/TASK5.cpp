#include <stdio.h>
#include <math.h>  

int main() {
    float loan_amount, annual_rate, monthly_rate, emi;
    int years, months;

    // Input
    printf("Enter Loan Amount: ");
    scanf("%f", &loan_amount);

    printf("Enter Annual Interest Rate (%%): ");
    scanf("%f", &annual_rate);

    printf("Enter Duration (years): ");
    scanf("%d", &years);

    // Process
    months = years * 12;
    monthly_rate = annual_rate / (12 * 100);   // convert % per year to per month fraction
    emi = loan_amount * monthly_rate * pow(1 + monthly_rate, months) / pow(1 + monthly_rate, months) - 1;

    // Output
    printf("LOAN CALCULATION\n");
    printf("Loan Amount: %.2f\n", loan_amount);
    printf("Duration: %d years (%d months)\n", years, months);
    printf("Interest Rate: %.2f%% per year\n", annual_rate);
    printf("Monthly EMI: %.2f\n", emi);

    return 0;
}
