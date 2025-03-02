#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int median = 0;
    if (a & 1) {
        median = myarray[(a+1)/2];
    }
    else {
        median = (myarray[a/2] + myarray[a/2 + 1])/2;
    }
    printf("%d", median);
}