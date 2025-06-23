#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int i, n;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    insertionSort(a, n);
    int min = a[1] - a[0];
    for (i = 2; i < n; i++)
        if (a[i] - a[i - 1] < min) 
            min = a[i] - a[i - 1];
    for (i = 1; i < n; i++)
        if (a[i] - a[i - 1] == min) 
            printf("%d %d ", a[i - 1], a[i]);
    printf("\n");
    return 0;
}
