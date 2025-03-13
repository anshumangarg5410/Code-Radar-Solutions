#include <stdio.h>

int main() {
    int n, pos = 0;
    scanf("%d", &n);
    while ((n & 1) == 0) {  
        n >>= 1;  // Right shift to remove trailing 0s
        pos++;
    }
    printf("%d", pos);
}