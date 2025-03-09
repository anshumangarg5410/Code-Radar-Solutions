#include<stdio.h>
#include<stdlib.h>

int seenin(int arr[], int a, int target){
    for(int i =0; i<a;i++){
        if (arr[i] == target) return 1;
    }
    return 0;
}

int findKthMissing(int arr[], int a, int k){
    int elecnt = 0; int ele = 1;
    while (1) {
        if (seenin(arr, a, ele) == 0) {
            elecnt++;
            if (elecnt == k) return ele;
        }
        ele++;
    }
}