#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) *sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myvec[i]);
    }
    int dec = 0;int big = 0; int equal=0;
    for(int i =0;i<a;i++){
        if (myvec[i] > myvec[i+1]) dec ++;
        else if (myvec[i] < myvec[i+1]) {
            big++;
        }
        else if (myvec [i] == myvec[i+1]){
            equal++;
        }
    }
    if (dec == a-1 || big == a-1 || equal == a-1) {
        printf("YES");
        return 0;
    } 
    else {
        printf("NO");
        return 0;
    }
    return 0;
}