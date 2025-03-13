#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];           // Current element to insert
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are > key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;           // Place key at correct position
    }
    printf("test");
}