#include <stdio.h>
#include<stdlib.h>

int maxele(int myarray[], int a){
    int max;
    max = myarray[0];
    for (int i =0; i<a; i++){
        if(myarray[i] >= max) max = myarray[i];
    }
    return max;
}


int main() {
    int a;
    scanf("%d", &a);
    int *vector = malloc((a) * sizeof(int));
    int *finall = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &vector[i]);
    }
    for(int i =0; i<a; i++){
        if (i == a-1) finall[i] = -1;
        else {
            vector[i] = 0;
            finall[i] = maxele(vector, a);
        }

    }
    for (int j =0; j<a; j++){
        printf("%d ", finall[j]);
    }
    return 0;
}