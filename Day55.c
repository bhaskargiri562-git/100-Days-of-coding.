#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int x = 1; x <= n; x++) {
        int left = 0, right = 0;

        for (int i = 1; i <= x; i++)
            left += i;

        for (int i = x; i <= n; i++)
            right += i;

        if (left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}