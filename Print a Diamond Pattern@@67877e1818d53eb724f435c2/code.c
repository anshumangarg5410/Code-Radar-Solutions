#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i<2*a - 1; i++){
        if (i >= 0 && i < a-1){
            for (int j = 0; j <a-i-1; j++){
                printf(" ");
            }

            for (int z = 0; z < 2*i + 1; z++){
                printf("*");
            }
        }
        else if (i == a-1){
            for (int r = 0; r < 2*a - 1; r++){
                printf("*");
            }
        }
        else if (i >= a && i <= 2*a -1){
            for (int j = 0; j<i-a+1; j++){
                printf(" ");
                // printf("%d", i);
            }

            for (int w = 0; w < 2*(2*a - 2 -i)+1; w++){
                printf("*");
                // printf("%d", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
