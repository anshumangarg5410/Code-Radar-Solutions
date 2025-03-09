#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int smalles(int arr[], int a){
    int smallest = INT_MAX; int smlind = 0;
    for (int i =0; i<a; i++){
        if (arr[i] < smallest) {
            smallest = arr[i];
            smlind = i;
        }
    }
    arr[smlind] = INT_MAX;
    return smallest;
}

int kthSmallest(int arr[], int a, int k){
    int result = 0;
    for(int i =0; i<k; i++){
        result = smalles(arr, a);
    }
    return result;
}