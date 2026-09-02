#include <stdio.h>

int main() {
    int n;
    double total_sum = 0.0;
    double numerator = 2.0;
    double denominator = 3.0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        total_sum += numerator / denominator;
        numerator += 2.0;
        denominator += 4.0;
    }

    printf("Sum of the series up to %d terms: %.4f\n", n, total_sum);
    return 0;
}

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns (always 5 stars per row)
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
