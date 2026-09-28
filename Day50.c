#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, n;

    scanf("%s", str);
    n = strlen(str);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (!(i == n - 1 && j == n - 1))
                printf(",");
        }
    }

    return 0;
}