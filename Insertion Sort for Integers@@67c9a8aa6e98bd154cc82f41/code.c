#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n) {
    int key, j;
    for(int i = 1; i<n; i++){
        key = arr[i]; j = i-1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}