#include <stdio.h>

int main() {
    int a, count;
    scanf("%d", &a);
    for (int i = 0; i<a; i++){
        count = 1;
        for (int j = 0; j<i+1; j++){
            printf("%d ", count);
            count ++;
        }
        printf("\n");
    }
    return 0;
}