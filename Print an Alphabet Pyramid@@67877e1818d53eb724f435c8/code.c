#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i =0; i<a; i++){
        int count = 65;
        for(int j =0; j<=i; j++){
            printf("%c ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}