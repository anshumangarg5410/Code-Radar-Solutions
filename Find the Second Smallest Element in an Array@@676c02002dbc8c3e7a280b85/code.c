#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int maxfunc(int ar[], int size){
    int max = INT_MIN;
    for(int i =0; i<a; i++){
        if (ar[i] > max) max = ar[i];
    }
    return max;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0;i <a, i++){
        scanf("%d", &myarray[i]);
    }
    for(int i =0; i<a; i++){
        if (myarray[i] == maxfunc(myarray, a)) myarray[i] = INT_MIN;
    }
    return maxfunc(myarray, a);

}