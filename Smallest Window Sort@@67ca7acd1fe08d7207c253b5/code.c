#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void bubbleSort(int arr[], int a){
    for(int i =0; i<a; i++){
        for(int j = 0; j<a-1; j++){
            if (arr[j] > arr[j+1] > 0) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findUnsortedSubarray(int arr[], int size){
    int copiedar[100];
    for(int i = 0; i<size; i++){
        copiedar[i] = arr[i];
    }
    bubbleSort(copiedar, size);

    int first = 0, last=0;
    for(int i = 0; i<size; i++){
        if (arr[i] != copiedar[i]) {
            first = i;
            break;
        }
    }
    for(int i = size-1; i>=0; i--){
        if (arr[i] != copiedar[i]){
            last = i;
            break;
        }
    }

    // for(int i = 0; i<size; i++){
    //     printf("%d ", arr[i]);
    // } printf("----\n");
    // for(int i = 0; i<size; i++){
    //     printf("%d ", copiedar[i]);
    // }
    // printf("----\n");
    int result = abs(first - last);
    if (result == 0) return 0;
    else return abs(first - last) + 1;
}





// int findUnsortedSubarray(int arr[], int size){
//     int first = 0, last = 0;
//     for (int i =0; i<size-1; i++){
//         if (i == 0){
//             if (arr[i] > arr[i+1]){
//                 first = i;
//                 break;
//             }
//         }
//         else {
//             if (arr[i] < arr[i-1] || arr[i] > arr[i+1]) {
//                 first = i;
//                 break;
//             }
//         }
//     }
//     for (int i =size-1; i>0; i--){
//         if (i == size-1){
//             if (arr[i] < arr[i-1]){
//                 last = i;
//                 break;
//             }
//         }
//         else {
//             if (arr[i] < arr[i-1] || arr[i] > arr[i+1]) {
//                 last = i;
//                 break;
//             }
//         }
//     }
//     printf("\n%d %d %d %d\n", first, last, arr[first], arr[last]);
//     int result = abs(first - last);
//     if (result == 0) return result;
//     else return (result + 1);
// }