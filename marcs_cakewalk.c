#include <stdio.h>
#include <math.h>

#define MAX_N 1000 

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
    int n, calories[MAX_N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &calories[i]);
    insertionSort(calories, n);
    long long sum = 0;
    for (int i = 0; i < n; i++) 
        sum += (long long)calories[i] * (1LL << i); // or ((int)pow(2,i)) instead of (1LL<<i)
    printf("%lld\n", sum);
    return 0;
}
