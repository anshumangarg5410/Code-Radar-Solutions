#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int searchInRotatedArray(int arr[], int a, int target){
    for(int i =0; i<a; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
