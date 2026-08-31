Q27: Sum of First n Odd Numbers
code:
#include <stdio.h>

int main() {
    int n, sum = 0, current_odd = 1;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += current_odd;
        current_odd += 2;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}

Q28: Product of Even Numbers from 1 to n
code:
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int has_even = 0;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            has_even = 1;
        }
    }

    if (has_even) {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("There are no even numbers in the range 1 to %d.\n", n);
    }

    return 0;
}
