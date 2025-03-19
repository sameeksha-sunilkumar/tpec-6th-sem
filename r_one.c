#include <stdio.h>

void printArray(int arr[], int N) {
	int i;
    for ( i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int N) {
	int i;
    for ( i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        // Print array after each pass
        printf("Step %d: ", i);
        printArray(arr, N);
    }
}

int main() {
    int N;
    
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    int i;

    printf("Enter %d elements: ", N);
    for ( i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, N);

    insertionSort(arr, N);

    printf("Sorted array: ");
    printArray(arr, N);

    return 0;
}
