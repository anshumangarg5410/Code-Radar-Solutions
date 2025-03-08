#include<stdio.h>

void selectionSort(char arr[], int size){
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

void printArray(char arr[], int size){
    for(int i =0; i<size; i++){
        printf("%c ", arr[i]);
    }
}