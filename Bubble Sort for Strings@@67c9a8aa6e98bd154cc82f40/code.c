#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int bubbleSort(char arr[], int a){
    for(int i =0; i<a; i++){
        for(int j = 0; j<a-1; j++){
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char temp[100]; strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

