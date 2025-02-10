#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) *sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myvec[i]);
    }
    for(int i =0; i<a; i++){
        printf("%d ELEMENT= %d\n", i, myvec[i]);
    }

}