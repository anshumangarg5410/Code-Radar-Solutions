#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int *vector = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &vector[i]);
    }
    int maxx = -1;
    for (int i =0; i<a; i++){
        if (vector[i] > maxx and vector[i] %2 == 0) {
            maxx = vector[i];
        }
    }
    printf("%d", maxx);
    return 0;
}