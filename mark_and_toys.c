#include <stdio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
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
    int n, k, i, avail = 0, count = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    int cost[n]; 
    for (i = 0; i < n; i++) {
        scanf("%d", &cost[i]);
    }
    insertionSort(cost, n);
    while(avail<=k) 
{ 
    avail+=cost[count];  
    count++; 
}   
printf("%d\n",count-1);    
    return 0;
}
