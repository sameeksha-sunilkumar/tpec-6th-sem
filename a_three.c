#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int maxXor(int l, int r) {
    int max = 0,i,j;
    for(i=l;i<r;i++)
        for(j=i+1;j<=r;j++)
            max = max<(i^j)?i^j:max;
    return max;
}
int main() {
    int res;
    int _l;
    int _r;
    scanf("%d", &_l);
    scanf("%d", &_r);
    res = maxXor(_l, _r);
    printf("%d", res);
    return 0;
}
