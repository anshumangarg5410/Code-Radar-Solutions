#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myvec[i]);
    }
    for(int i =0; i<a; i++){
        int summ = 0;
        for(int j = 0; j<i; j++){
            summ+= myvec[j];
        }
        printf("%d ", summ);
    }
    return 0;
}