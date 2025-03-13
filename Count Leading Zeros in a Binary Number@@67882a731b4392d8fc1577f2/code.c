#include <stdio.h>

int countLeadingZeros(int n) {
    if (n == 0) return 32; 
    int count = 0;
    while ((n & (1 << 31)) == 0) {  
        count++;
        n <<= 1;  
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countLeadingZeros(n));
    return 0;
}