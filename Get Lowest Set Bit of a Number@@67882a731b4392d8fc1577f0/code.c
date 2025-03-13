#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int lsb = n & -n;  
    printf("%d", lsb);
    return 0;
}