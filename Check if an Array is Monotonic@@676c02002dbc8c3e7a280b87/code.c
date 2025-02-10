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
        if((myvec[i] > myvec[i+1]) && (i!=a)) {flag1++;
        printf("flag1 upd at %d and %d\n", myvec[i], myvec[i+1]);}
    }
    for(int i =0; i<a;i++){
        if((myvec[i] < myvec[i+1]) && (i!=a)) {flag2++;
        printf("flag2 upd at %d and %d\n", myvec[i], myvec[i+1]);}
    }
    for(int i =0; i<a;i++){
        if((myvec[i] == myvec[i+1]) && (i!=a)) {flag2++; flag1++;
        printf("flag2&1 upd at %d and %d\n", myvec[i], myvec[i+1]);}
    }
    printf("flag 1 = %d and flag 2= %d\n", flag1, flag2);
    if (flag1 == a-1 || flag2 == a-1) {
        printf("YES");
        return 0;
    }
    else {
        printf("NO");
        return 0;
    }
}