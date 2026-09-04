Q49: Number Patternc#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

Q50: Star Patternc#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
