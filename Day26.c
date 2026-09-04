Q51: Number Pattern
  code:
#include <stdio.h>

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

Q52: Pyramidal / Grid Star Pattern
  code:
#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (count < 13) {
                printf("* ");
                count++;
            }
        }
        printf("\n");
    }

    return 0;
}
