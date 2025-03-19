#include <stdio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) { 
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int n, k, sum = 0;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    insertionSort(a, n);
    for (int i = 0; i < n; i++) 
        sum += a[i] * (1 + i / k);
    printf("%d\n", sum);
    return 0;
}
