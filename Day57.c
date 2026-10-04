#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int greater = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                greater = arr[j];
                break;
            }
        }

        printf("%d", greater);

        if (i < n - 1)
            printf(", ");
    }

    return 0;
}