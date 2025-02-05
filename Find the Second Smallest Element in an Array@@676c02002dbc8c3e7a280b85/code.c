#include <stdio.h>
#include<stdlin.h>

int main() {
    int a;
    scanf("%d", &a);
    int *vector = malloc((n) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &vector[i]);
    }
    int maxx = vector[0];
    int target;
    for(int i =0; i<a; i++){
        if(vector[i] > maxx) {
            maxx = vector[i];
            target = i;
        }
    }
    vector[target] = 0;
    maxx = vector[0];
    int target;
    for(int i =0; i<a; i++){
        if(vector[i] > maxx) {
            maxx = vector[i];
        }
    }
    printf("%d", maxx);

    return 0;
}