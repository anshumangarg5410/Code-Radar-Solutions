#include <stdio.h>

int countTrailingZeros(int n) {
    if (n == 0) return 32;
    int count = 0;
    while ((n & 1) == 0) { 
        count++;
        n >>= 1; 
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countTrailingZeros(n));
    return 0;
}
