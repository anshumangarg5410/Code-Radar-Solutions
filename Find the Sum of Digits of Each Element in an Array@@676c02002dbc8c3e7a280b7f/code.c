#include<stdio.h>
#include<stdlib.h>

int digitsum(int num){
    // if (0 <= num < 10) return num;
    int numcopy = num; int sum = 0;
    if (num < 0) numcopy = -numcopy;
    while (numcopy > 0){
        sum += numcopy % 10;
        numcopy = numcopy/10;
    }
    return sum;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    for (int i =0; i<a; i++){
        printf("%d ", digitsum(myarray[i]));
    }
}