#include <stdio.h>

int clearNthBit(int n, int pos) {
    return n & ~(1 << pos);
}

int main() {
    int num = 13;  
    int pos = 2;  
    num = clearNthBit(num, pos);
    printf("%d", num);
}