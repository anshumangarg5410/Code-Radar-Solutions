#include<stdio.h>

int comparison(char arr[][100], int i, int target, int minele){
    if (arr[i][target] < arr[minele][target]) return i;
    else if (arr[i][target] == arr[minele][target]){
        comparison(char arr[][100], int i, int target++, int minele);
    }
    return -1;
}

void selectionSort(char arr[][100], int size){
    for(int i =0; i<size; i++){
        int targetchar = 0; int minele = 0;
        for(int j =i+1; j<size; j++){
            if (comparison(arr[][100], i, targetchar, minele) >= 0) minele = comparison(arr[][100], i, targetchar, minele);
            else printf("error!");
        }
        int temp = arr[i];
        arr[i] = arr[minele];
        arr[minele] = temp;
    }
}

void printArray(char arr[], int size){
    for(int i =0; i<size; i++){
        printf("%d ", arr[i]);
    }
}