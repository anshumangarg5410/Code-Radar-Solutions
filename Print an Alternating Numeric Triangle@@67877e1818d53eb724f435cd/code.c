#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int count;
    for (int i=0; i<a; i++){
        if (i%2 == 0) count = 1;
        else count = 0;
        for (int j =0; j<=i; j++){
            printf("%d ", count);
            count = !count;
        }
        printf("\n");
    }
    return 0;
}