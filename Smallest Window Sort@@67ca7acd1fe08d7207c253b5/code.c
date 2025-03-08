#include <stdio.h>
#include<stdlib.h>

int findUnsortedSubarray(int arr[], int size){
    int first = 0, last = 0;

    for (int i =0; i<size-1; i++){
        if (i == 0){
            if (arr[i] > arr[i+1]){
                first = i;
                break;
            }
        }
        else {
            if (arr[i] < arr[i-1] || arr[i] > arr[i+1]) {
                first = i;
                break;
            }
        }
    }

    for (int i =size-1; i>0; i--){
        if (i == size-1){
            if (arr[i] < arr[i-1]){
                last = i;
                break;
            }
        }
        else {
            if (arr[i] < arr[i-1] || arr[i] > arr[i+1]) {
                last = i;
                break;
            }
        }
    }
    printf("%d %d %d %d", first, last, arr[first], arr[last]);
    int result = abs(first - last);
    return result;
}