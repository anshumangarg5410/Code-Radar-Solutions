#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int summ = 0;
    for (int i=1; i<=a; i++){
        summ+=i;
    }
    printf("%d", summ);
    return 0;
}