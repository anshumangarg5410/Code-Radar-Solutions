#include <stdio.h>

int getNthBit(int n, int pos) {
    return (n >> pos) & 1;
}

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    printf("%d", getNthBit(num, pos));
}