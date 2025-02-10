#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) *sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myvec[i]);
    }
    int flag1 = 0; int flag2 = 0;
    for(int i =0; i<a;i++){
        if(myvec[i] >= myvec[i+1]) flag1++;
    }
    for(int i =0; i<a;i++){
        if(myvec[i] <= myvec[i+1]) flag2++;
    }
    if (flag1 == a-1 || flag2 == a-1) {
        printf("YES");
        return 0;
    }
    else {
        printf("NO");
        return 0;
    }
}