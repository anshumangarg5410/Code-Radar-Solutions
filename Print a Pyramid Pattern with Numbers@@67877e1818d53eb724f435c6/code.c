#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i =0; i<a; i++){
        int count = 0;
        for (int j =a-i-1; j>0; j--){
            printf("_");
        }

        for (int j =0; j<=i;j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}