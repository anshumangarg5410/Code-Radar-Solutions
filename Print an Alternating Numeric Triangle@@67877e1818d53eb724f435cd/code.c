#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int count;
    for (int i=0; i<a; i++){
        for (int j =0; j<=i; j++){
            if (j%2 == 0 && i%2 == 0) count = 1;
            else count = 0;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}