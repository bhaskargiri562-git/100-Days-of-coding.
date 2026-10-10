#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int nums[n], answer[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix = 1;

    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}