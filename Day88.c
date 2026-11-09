#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Color colors[] = {RED, YELLOW, GREEN};
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < 3; i++) {
        printf("%s=%d\n", names[i], colors[i]);
    }

    return 0;
}