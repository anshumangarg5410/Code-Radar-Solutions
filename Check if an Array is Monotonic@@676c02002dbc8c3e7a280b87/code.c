#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) *sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myvec[i]);
    }
    int flag = 0;int big = 0;
    for(int i =0;i<a;i++){
        if (myvec[i] > myvec[i+1]) flag = 1;
        else if (myvec[i] < myvec[i+1]) {
            big++;
        }
        else {
            continue;
        }
    }
    if (flag == 1 || big == a-1) {
        printf("YES");
        return 0;
    } 
    else {
        printf("NO");
        return 0;
    }
    return 0;
}