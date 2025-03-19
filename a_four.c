#include <stdio.h>

long countZeroBits(long n) {
    if (n == 0) return 1; // Edge case: n = 0, only x = 0 works, so answer is 1.
    
    int count = 0;
    while (n) {
        if ((n & 1) == 0) count++;  // Count zero bits
        n >>= 1;  // Right shift n
    }
    return (1L << count);  // 2^count
}

int main() {
    long n;
    scanf("%ld", &n);
    printf("%ld\n", countZeroBits(n));
    return 0;
}
