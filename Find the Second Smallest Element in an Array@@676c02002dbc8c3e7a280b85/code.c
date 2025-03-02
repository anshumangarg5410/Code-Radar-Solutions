#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int minfunc(int ar[], int size){
    int min = INT_MAX;
    for(int i =0; i<size; i++){
        if (ar[i] <= min) min = ar[i];
    }
    return min;
}

int main(){
    int a;
    scanf("%d", &a);
    if (a == 1) {printf("-1"); return -1;};
    int *myarray = malloc(a * sizeof(int));
    for(int i =0;i <a; i++){
        scanf("%d", &myarray[i]);
    }
    int smallestele = minfunc(myarray, a);
    for(int i =0; i<a; i++){
        if (myarray[i] == minfunc(myarray, a)) {myarray[i] = INT_MAX; printf("yes, changed");}
    }
    printf("%d\n", smallestele);
    if (smallestele == minfunc(myarray, a)) {
        printf("-1");
        return -1;
    }
    else {
        printf("%d", minfunc(myarray, a));
        return 1;
    }

}