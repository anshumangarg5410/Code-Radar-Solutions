#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    scanf("%d", &a);
    int *myvector = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myvector[i]);
    }
    int freqvector[2] = {0,0};
    for(int i =0; i<a; i++){
        int count = 1;
        for (int j =i+1; j<a; j++){
            if (myvector[i] == myvector[j]) {
                count++;
            }
        }
        if (count > freqvector[1]) {
        freqvector[0] = myvector[i];
        freqvector[1] = count;
        }
    }
    printf("%d", freqvector[0]);
}