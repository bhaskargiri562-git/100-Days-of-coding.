Q57: Find the Sum of Array Elements (C Code)
code:
#include <stdio.h>

// Function to calculate the sum of array elements
int findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int totalSum = findSum(arr, n);
    printf("Sum of array elements: %d\n", totalSum);
    
    return 0;
}

Q58: Find the Maximum and Minimum Element in an Array (C Code)
code:
#include <stdio.h>

// Function to find maximum and minimum values
void findMaxMin(int arr[], int n, int *max, int *min) {
    // Handle edge case where array might be empty
    if (n <= 0) return;

    // Initialize max and min with the first element
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 1, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMaxMin(arr, n, &max, &min);
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
