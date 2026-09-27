#include <stdio.h>

int main() {
    char first[20], middle[20], last[20];

    scanf("%s %s %s", first, middle, last);

    printf("%c.%c. %s", first[0], middle[0], last);

    return 0;
}