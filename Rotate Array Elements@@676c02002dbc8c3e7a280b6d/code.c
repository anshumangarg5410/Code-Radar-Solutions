#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rotate(int arr[], int n){
    int last = arr[n-1];
    for(int i =1;i<a;i++){
        if (i == n-1){
            arr[0] = last;
        }
        else {
            arr[i] = arr[i-1]
        }
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int *myar = malloc(a * sizeof(int));
    for(int i = 0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int count;
    scanf("%d", &count);
    for(int i =0; i<count; i++){
        rotate(myar, count);
    }
    for(int i =0; i<a; i++){
        printf("%d\n", myar[i]);
    }
}