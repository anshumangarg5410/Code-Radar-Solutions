#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a == 1) return -1;
    int *vector = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", vector[i])l
    }
    int minn = INT_MAX;
    for(int i =0; i<a-1; i++){
        for (int j=0; j<a; j++){
            if (abs(vector[i] - vector[j] < minn)) minn = abs(vector[i] - vector[j]);
        }
    }
    
    return 0;
}