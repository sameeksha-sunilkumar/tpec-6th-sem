#include <stdio.h>

void insertionSort(int arr[], int N, int *shift) {
    *shift = 0;
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            (*shift)++;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N;
    
    scanf("%d", &N);

    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int shift = 0;


    insertionSort(arr, N, &shift);

    printf("%d\n", shift);

    return 0;
}
