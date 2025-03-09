#include<stdio.h>
#include<stdlib.h>

int seenin(int arr[], int a, int targ){
    for(int i =0; i<a;i++){
        if (arr[i] == target) return 1;
    }
    return 0;
}

int findKthMissing(int arr[], int a, int k){
    int elecnt = 1; int ele = 1;
    for(int i =0; i<a; i++){
        if (!seenin(arr, a, ele)) {
            elecnt++;
        }
        if (elecnt == k) return ele;
        ele++;
    }
}