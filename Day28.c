Q55: Prime Numbers from 1 to \(n\) (Nested Loops)
CODE:
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Prime numbers between 1 and %d are:\n", n);
    
    // 1 is not a prime number, so we start from 2
    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume i is prime

        // Inner loop to check for factors
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Found a factor, so it's not prime
                break;
            }
        }

        // If no factors were found, print the number
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

Q56: Read and Print Elements of a 1D Array
CODE:
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n]; // Declare array of size n

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    // Printing elements of the array
    printf("The elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
