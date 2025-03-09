#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int bubbleSort(char arr[], int a){
    for(int i =0; i<a; i++){
        for (int j = 0; j<a; j++){
            if (arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int printArray(char arr[], int a){
    for(int i =0; i<a; i++){
        printf("%c ", arr[i]);
    }
}