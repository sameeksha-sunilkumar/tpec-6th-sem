#include <stdio.h>

void print(int ar_size, int* ar) {
    for(int i = 0; i < ar_size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void insertionSort(int ar_size, int* ar) {
    for (int i = ar_size - 2; i >= 0; i--) {  // Start from second last element
        int v = ar[i];  
        int j = i + 1;

        // Shift elements to the left if they are greater than v
        while (j < ar_size && ar[j] < v) {
            ar[j - 1] = ar[j];
            j++;
            print(ar_size, ar);  // Print after each shift
        }

        ar[j - 1] = v;  // Insert the element at the correct position
        print(ar_size, ar);  // Print array after insertion
    }
}

int main() {
    int _ar_size;
    scanf("%d", &_ar_size);

    int _ar[_ar_size];
    for (int i = 0; i < _ar_size; i++) { 
        scanf("%d", &_ar[i]); 
    }

    insertionSort(_ar_size, _ar);
    
    return 0;
}
