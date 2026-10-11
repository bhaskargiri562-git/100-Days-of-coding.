
#include <stdio.h>

int main() {
    int n, k, i;
    int arr[1000];
    int sum = 0, maxSum;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    // Calculate sum of first k elements
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    // Slide the window
    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
