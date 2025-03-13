#include<stdio.h>

int flipbits(int n){
    return ~n;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d", flipbits(a));
}