#include <stdio.h>

int findUnsortedSubarray(int arr[], int size){
    int first, last;
    for(int i =1; i<size-1; i++){
        if ((i == 0) && (arr[i] > arr[i+1])){
            first = arr[i];
            break;
            }

        }
        if (!((arr[i-1] < arr[i] && arr[i] < arr[i+1]) && (i != 0 && i != size-1))) {
            first = arr[i];
            break;
        }
    } 
    for(int i =size-2; i>0; i--){

        if ((i == size-1) && (arr[i] < arr[i-1])) {
            last = arr[i];
            break;
        }

        if (!((arr[i-1] < arr[i] && arr[i] < arr[i+1]) && (i != 0 && i != size-1))) {
            last = arr[i];
            break;
        }
    } 
    printf("\n%d %d\n", first, last);

}

