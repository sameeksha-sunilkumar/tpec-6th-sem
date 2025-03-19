#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort1(int n, int arr[]) {
    int key = arr[n - 1];  // Last element (unsorted)
    int i = n - 2;

    // Shift elements to the right until the correct position for key is found
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];  // Shift element right
        i--;
        
        // Print array after each shift
        printArray(arr, n);
    }

    arr[i + 1] = key;  // Insert the key in its correct position
    
    // Print final sorted array
    printArray(arr, n);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort1(n, arr);
    
    return 0;
}
