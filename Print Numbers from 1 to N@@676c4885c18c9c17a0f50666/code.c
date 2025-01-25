#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int count = 1;
    for (int i =0; i<a; i++){
        printf("%d ", count);
        count++;
    }
    return 0;
}