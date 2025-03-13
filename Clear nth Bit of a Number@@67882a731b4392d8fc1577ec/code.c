#include <stdio.h>

int clearNthBit(int n, int pos) {
    return n & ~(1 << pos);
}

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);  
    num = clearNthBit(num, pos);
    printf("%d", num);
}