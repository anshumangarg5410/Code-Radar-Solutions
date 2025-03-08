#include<stdio.h>

void selectionSort(int arr[], int size){
    for (int i = 0; i<size; i++){
        int minele = i;
        for (int j = i+1; j<size; j++){
            if (arr[j] <= arr[minele]) minele = j;
        }
        int temp = arr[i];
        arr[i] = arr[minele];
        arr[minele] = temp;
    }
}

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        printf("%d ", arr[i]);
    }
}