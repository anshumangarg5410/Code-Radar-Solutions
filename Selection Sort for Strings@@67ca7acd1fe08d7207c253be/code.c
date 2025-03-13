#include<stdio.h>
#include<string.h>

void selectionSort(char arr[][100], int size) {
    for (int i = 0; i < size-1; i++) {
        int minele = i; 
        for (int j=i+1; j<size; j++) {
            if (strcmp(arr[j], arr[minele]) < 0) { 
                minele = j;
            }
        }
        char temp[100];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[minele]);
        strcpy(arr[minele], temp);
    }
}

// void selectionSort(char myarr[][100], int a) {
//     for(int i = 0;i<a-1;i++) {
//         for(int j = 0;j<a-1;j++) {
//             int y = strcmp(myarr[j],myarr[j+1]);
//             if(y > 0) {
//                 char temp[100];
//                 strcpy(temp,myarr[j+1]);
//                 strcpy(myarr[j+1],myarr[j]);
//                 strcpy(myarr[j],temp);
//             }
//         }
//     }
// }



void printArray(char arr[][100], int size){
    for(int i =0; i<size; i++){
        printf("%s\n", arr[i]);
    }
}