#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insertionSort(char arr[][100], int n) {
    char key[100]; int j;
    for(int i = 1; i<n; i++){
        strcpy(key, arr[i]); j = i-1;
        while (j >= 0 && (strcmp(arr[j], key) > 0)){
            strcpy(arr[j + 1], arr[j]); 
            // arr[j+1] = arr[j];
            j--;
        }
        strcpy(arr[j+1], key);
        // arr[j+1] = key;
    }
}

int printArray(char arr[][100], int n){
    for(int i=0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}