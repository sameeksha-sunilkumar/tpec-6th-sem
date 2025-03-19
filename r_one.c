#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int N) {
    int i,j;
    for (i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
	int i, N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    
    int arr[N]; 

    printf("Enter %d elements: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: ");
    for ( i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, N);

    printf("Sorted array: ");
    for ( i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
