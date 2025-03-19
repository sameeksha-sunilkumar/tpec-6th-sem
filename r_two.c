#include <stdio.h>

void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int N) {
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        // Print array after each iteration
        printArray(arr, N);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, N);
    
    return 0;
}
