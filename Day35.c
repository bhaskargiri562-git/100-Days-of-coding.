Q69: Find the second largest element in an array.
Code:
  
#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int largest, second;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}

Q70: Rotate an array to the right by k positions.
Code:

#include <stdio.h>

int main() {
    int n, k, i;
    int a[100], temp[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = a[i];
    }

    for(i = 0; i < n; i++) {
        a[i] = temp[i];
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
