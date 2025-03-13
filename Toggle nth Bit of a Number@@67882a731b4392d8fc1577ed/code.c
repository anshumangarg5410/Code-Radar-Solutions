#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int nthbit(int num, int pos){
    return num ^ (1 << pos);
}

int main(){
    int num, pos;
    scanf("%d %d", &num, &pos);
    printf("%d", nthbit(num, pos));
}