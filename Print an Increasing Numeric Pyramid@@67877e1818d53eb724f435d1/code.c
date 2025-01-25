#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        int count = 1;
        for (int h=a-i-1; h>0; h--){
            printf(" ");
        }

        for(int j =0; j<=i; j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}