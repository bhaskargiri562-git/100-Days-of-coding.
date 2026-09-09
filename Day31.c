Q61: Search for an element in an array using linear search
CODE:
#include <stdio.h>

// Returns index of key if found, otherwise returns -1
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {24, 5, 89, 12, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    int index = linearSearch(arr, size, key);

    if (index != -1) {
        printf("Element %d found at index: %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

Q62: Reverse an array without taking extra space
CODE:
#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        // Swap elements using a temporary variable
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}
