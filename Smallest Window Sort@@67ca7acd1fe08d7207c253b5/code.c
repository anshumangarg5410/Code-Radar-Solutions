#include <stdio.h>

int findUnsortedSubarray(int arr[], int size){
    int first, last;

    for (int i =0; i<size-1; i++){
        if (i == 0){
            if (arr[i] > arr[i+1]){
                first = arr[i];
                break;
            }
        }
        else {
            if (arr[i] < arr[i-1] || arr[i] > arr[i+1]) {
                first = arr[i];
                break;
            }
        }
    }

    for (int i =size-1; i>0; i--){
        if (i == size-1){
            if (arr[i] < arr[i-1]){
                last = arr[i];
                break;
            }
        }
        else {
            if (arr[i] < arr[i-1] || arr[i] > arr[i+1]) {
                last = arr[i];
                break;
            }
        }
    }
    printf("%d %d", first, last);
}