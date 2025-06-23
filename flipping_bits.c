#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int t;
    unsigned int n;
    scanf("%d", &t);
    while(t-- > 0) {
        scanf("%u", &n);
        printf("%u\n", ~n);
    }
    return 0;
}
