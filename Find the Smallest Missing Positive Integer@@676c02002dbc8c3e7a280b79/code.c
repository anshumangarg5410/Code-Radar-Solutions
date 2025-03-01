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

int mixele(int myarray[], int size){
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
    int j = 1; , int element;
    for (int i =0; i<=a; i++){
        int condition = 0
        if (myarray[i] == minele(myarray, a) + j)  {
            condition = 1;
        }
        if (!condition) element = myarray[minele(myarray, a) + j] 
        j++;
        if (i == a-1) i = -1;
        if (j == a-1) break;
    }
    printf("%d", element);

}