#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int count;
    for (int i=0; i<a; i++){
        for (int j =0; j<=i; j++){
            if (j%2 == 0) count = 0;
            else count = 1;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}