#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int e = 0;
    for(int i = 0;i<a;i++) {
        if(myarray[i] == 1) {
            e++;
        }
    }
    if(e == 0) {
        printf("1");
    }
}