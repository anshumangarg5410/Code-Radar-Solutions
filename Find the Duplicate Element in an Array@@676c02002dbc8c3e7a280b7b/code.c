#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myvec[i]);
    }
    for(int i =0; i<a; i++){
        for (int j =0;j<a;j++){
            if (myvec[i] == myvec[j] && i!=j){
                printf("%d", myvec[i]);
                return 0;
            }
        }
    }
    return 0;
}