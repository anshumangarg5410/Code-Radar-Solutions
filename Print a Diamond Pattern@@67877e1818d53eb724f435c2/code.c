#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i =0; i<2*a - 1;i++){
        if (i >= 0 && i < (2*a + 1)/2){
            for (int j = i; j < a; j++){
                printf(" ");
            }
            for (int z = 0;z<i+1; z++){
                printf("*");
            }
        }
        if (i == (2*a + 1)/2) {
            for (int y = 0; y<a; y++){
                printf("*");
            }
        }
        if (i > (2*a + 1)/2){
            for (int u = 0; u<=i-a+1; u++){
                printf(" ");
            }
        }


        
        printf("\n");
    }
    return 0;
}