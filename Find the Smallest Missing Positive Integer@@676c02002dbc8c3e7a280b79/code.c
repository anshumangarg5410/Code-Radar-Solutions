#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int max(int arr[], int a){
    int max = arr[0];
    for(int i =0; i<a; i++){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int count = 1;
    while(count != max(arr, a)){
        int condition = 0;
        for(int i =0; i<a; i++){
            if (myarray[i] == count){
                condition++;
            }
        }
        if (condition == 0) {
            printf("%d", count);
            return 0;
        }
        count++;
    }

}