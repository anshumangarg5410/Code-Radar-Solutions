#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, k;
    scanf("%d %d", &a, &k);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a;i++){
        scanf("%d", &myarray[i]);
    }
    int result = 0;
    for(int i =0;i<a;i++){
        if (myarray[i] == k) result++;
    }
    printf("%d", result);
}