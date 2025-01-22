#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d");
    if ((a >= 0 && b <= 0) || (a == 0 && b == 0)){
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}