#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int main() {
    int a;
    scanf("%d", &a);
    int *vector = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &vector[i]);
    }
    int maxx = INT_MIN;
    for (int i =0; i<a; i++){
        if (vector[i] > maxx && vector[i] %2 == 0) {
            maxx = vector[i];
        }
    }
    if (maxx == INT_MIN) printf(-1);
    else printf("%d", maxx);
    return 0;
}