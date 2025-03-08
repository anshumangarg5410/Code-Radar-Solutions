#include<stdio.h>

int binarySearch(int arr[], int n, int target){
    int cond = 0; int result = 0; int ans;
    for(int i = 0; i<n; i++){
        if (arr[i] == target){
            cond++; ans = i;
        }
    }
    if (cond == n) {
        return n/2;
    }
    else return ans;
    
    return -1;
}