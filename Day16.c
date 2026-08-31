Q31: Decimal to Binary Conversion
code:
#include <stdio.h>

int main() {
    int num, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int temp = num;

    while (num > 0) {
        remainder = num % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        num = num / 2;
    }

    printf("Binary representation of %d is: %lld\n", temp, binary);
    return 0;
}

Q32: Palindrome Number Check
code:
#include <stdio.h>

int main() {
    int num, original, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Save original number

    while (num > 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
