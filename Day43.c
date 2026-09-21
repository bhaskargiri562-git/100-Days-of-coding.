#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int palindrome = 1;

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}