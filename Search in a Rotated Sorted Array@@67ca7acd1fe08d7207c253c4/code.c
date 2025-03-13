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
int main(){
    int a;
    scanf("%d", &a);
    int arr[100];
    for(int i =0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);

    
}