
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int prev = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(", ");
        }
        printf("%d", prev);
    }

    return 0;
}
