#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a == 1) return -1;
    int *vector = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &vector[i]);
    }
    int ele1, ele2;
    int minn = INT_MAX;
    for(int i =0; i<a-1; i++){
        for (int j=0; j<a; j++){
            if (abs(vector[i] - vector[j] < minn && i!=j)) {
                minn = abs(vector[i] - vector[j])
                ele1 = vector[i];
                ele2 = vector[j];
            };
        }
    }
    printf("%d %d", ele1, ele2);
    return 0;
}