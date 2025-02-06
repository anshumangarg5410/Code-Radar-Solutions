#include <stdio.h>

int main() {
    int a, k;
    scanf("%d %d", &a, &k);
    int *vector = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &vector[i]);
    }
    int count = 0;
    for (int j =0; j<a; j++){
        if (vector[i]>k) count ++;
    }
    printf("%d", count);
    return 0;
}