#include <stdio.h>

int main() {
    char first[20], last[20];

    scanf("%s %s", first, last);

    printf("%c.%c.", first[0], last[0]);

    return 0;
}