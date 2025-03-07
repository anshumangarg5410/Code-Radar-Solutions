#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int maxele(int myarray[], int size){
    int maxx = 0;
    for (int i =0; i<size; i++){
        if (myarray[i] > maxx) maxx = myarray[i];
    }
    return maxx;
}

int minele(int myarray[], int size){
    int minn = INT_MAX;
    for (int i =0; i<size; i++){
        if (myarray[i] < minn) minn = myarray[i];
    }
    return minn;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int j = 1; int element; int condition = 0;
    for (int i =0; i<=a; i++){
        if (j == a) break;
        if (myarray[i] != minele(myarray, a) + j)  {
            condition++; printf("condition updated at i: %d j: %d\n", i, j);
        }
        if (i == a-1){
            if (condition == a) element = myarray[j]; printf("stopped at i: %d j: %d and condition: %d\n", i, j, condition);
            condition = 0;
            i = -1;
            j++;
        }
    }
    printf("%d", element);
}