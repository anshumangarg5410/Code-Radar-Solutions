#include<stdio.h>
#include<stdlib.h>

int findOccurrence(int arr[], int a, int target, char mode){
    if (mode == 'F'){
        for(int i =0; i<a; i++){
            if (arr[i] == target) return i;
        }
    }
    else if (mode == 'L'){
        for(int i =a-1; i>=0; i--){
            if (arr[i] == target) return i;
        }
    }
    return -1;
}