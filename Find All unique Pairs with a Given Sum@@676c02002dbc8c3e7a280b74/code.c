#include<stdio.h>
#include<stdlib.h>

int sumchecker(int a, int b, int target){
    if (a+b == target) return 1;
    else return 0;
}

int seenin(int arr[], int a, int first, int second){
    for(int i =0; i<a-1; i++){
        if (arr[i] == first && arr[i+1] == second) return 1;
    }

}

int main(){
    int a, target;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    scanf("%d", &target);
    int j = 0;
    int result[100];
    int rescnt = 0;
    for(int i =j+1; i<a; i++){
        int first, second;
        if (sumchecker(myarray[j], myarray[i], target)) {
            first = myarray[j]; second = myarray[i];
            // printf("%d %d\n", myarray[j], myarray[i]);
            if(!seenin(myarray, a, first, second)) {
                result[rescnt] = first; result[rescnt+1] = second;
                rescnt += 2;
            }
        }
        if (j == a-1) break;
        if (i == a-1) {
            j++;
            i = j;
        }
        
    }
    int length = sizeof(result)/sizeof(int);
    for(int i =0; i<length; i += 2){
        printf("%d %d\n", result[i], result[i+1]);
    }


}


