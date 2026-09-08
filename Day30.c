Q59: Count Even and Odd Numbersc#include <stdio.h>
Code:

void countEvenOdd(int arr[], int size) {
    int evenCount = 0;
    int oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even elements = %d, Odd elements = %d\n", evenCount, oddCount);
}

int main() {
    int arr[] = {12, 35, 56, 9, 24, 83};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    countEvenOdd(arr, size);
    return 0;
}

Q60: Count Positive, Negative, and Zero Elementsc#include <stdio.h>
Code:

void countElements(int arr[], int size) {
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d\n", positiveCount, negativeCount, zeroCount);
}

int main() {
    int arr[] = {-4, 3, 0, -1, 5, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    countElements(arr, size);
    return 0;
}
