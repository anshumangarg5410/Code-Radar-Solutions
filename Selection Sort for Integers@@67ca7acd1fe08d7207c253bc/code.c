#include<stdio.h>

void selectionSort(int arr[], int size){
    for (int i = 0; i<size; i++){
        int minele = 0;
        for (int j = i+1; j<size; i++){
            if (arr[j] <= minele) minele = j;
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