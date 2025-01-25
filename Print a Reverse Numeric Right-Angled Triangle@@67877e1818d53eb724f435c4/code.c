#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i =0; i < a; i++){
        int count = 1;
        for (int j = a-i; j>0; j--){
            printf("%d", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}