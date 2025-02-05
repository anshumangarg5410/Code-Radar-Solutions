#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int *vector = malloc((n) * sizeof(int));
    for(int i =0; i<n; i++){
        scanf("%d", &vector[i]);
    }
    int maxx = vector[0];
    int target;
    for(int i =0; i<n; i++){
        if(vector[i] > maxx) {
            maxx = vector[i];
            target = i;
        }
    }
    vector[target] = 0;
    maxx = vector[0];
    for(int i =0; i<n; i++){
        if(vector[i] > maxx) {
            maxx = vector[i];
        }
    }
    printf("%d", maxx);

    return 0;
}