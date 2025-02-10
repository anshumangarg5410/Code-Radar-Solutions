#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", myvec[i]);
    }
    for(int i =0; i<a; i++){
        int sum = 0;
        for(int j = 0; j<i; j++){
            sum+= myvec[j];
        }
        printf("%d ", sum);
    }
    return 0;
}