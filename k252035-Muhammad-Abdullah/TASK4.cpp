#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage, cgpa;

    // Input
    printf("Enter marks of 5 subjects: ");
    for (int i = 1; i <= 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Process
    percentage = (total / 500) * 100;   // each subject is out of 100
    cgpa = (percentage / 100) * 4;

    // Output
    printf("STUDENT RESULT\n");
    printf("Marks: %.1f, %.1f, %.1f, %.1f, %.1f\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
    printf("Total: %.1f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("CGPA: %.2f / 4.00\n", cgpa);

    return 0;
}

