#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int binary(char arr[], int a){
    for(int i =0; i<a; i++){
        if (arr[i] != '0' || arr[i] != '1') return 1;
    }
    return 0;
}

int main(){
    char arr[100];
    scanf("%s", arr)
    int len = strlen(arr);
    if (binary(arr, len)) printf("No");
    else printf("No");
}