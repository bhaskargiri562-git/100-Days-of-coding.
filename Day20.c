Q39: Product of Odd Digits
code:
#include <stdio.h>
int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    if (num < 0) {
        num = -num;
    }
    long long product = 1;
    int hasOddDigit = 0;
    
    if (num == 0) {
        hasOddDigit = 0;
    } else {
        while (num > 0) {
            long long digit = num % 10;
            if (digit % 2 != 0) {
                product *= digit;
                hasOddDigit = 1;
            }
            num /= 10;
        }
    }
    if (hasOddDigit) {
        printf("Product of odd digits: %lld\n", product);
    } else {
        printf("Product of odd digits: 0 (No odd digits found)\n");
    }
    
    return 0;
}

Q40:1's Complement of a Binary Number.
code:
#include <stdio.h>

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    long long complement = 0;
    long long multiplier = 1;
    long long temp = binary;
    
    if (binary == 0) {
        complement = 1;
    } else {
        while (temp > 0) {
            long long digit = temp % 10;
            long long flippedDigit = (digit == 0) ? 1 : 0;
            complement = complement + (flippedDigit * multiplier);
            multiplier *= 10;
            temp /= 10;
        }
    }
    
    printf("1's complement: %lld\n", complement);
    
    return 0;
}
