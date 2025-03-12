#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1,2,3,4,5

//5,1,2,3,4
void rotate(int arr[], int n){
    int last = arr[n-1];
    for(int i =1;i<n;i++){
        arr[i] = arr[i-1];
        if (i == n-1) arr[0] = last;
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int *myar = malloc(a * sizeof(int));
    for(int i = 0; i<a; i++){
        scanf("%d", &myar[i]);
    }
    int count;
    scanf("%d", &count);
    // for(int i =0; i<count; i++){
    //     rotate(myar, count);
    // }
    rotate(myar, a);
    for(int i =0; i<a; i++){
        printf("%d\n", myar[i]);
    }
}