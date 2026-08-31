Q33: Armstrong Number Check
code:
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += round(pow(remainder, digits)); 
        originalNum /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

Q34: Prime Number Check
code:
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;     
            }
        }
    }
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
