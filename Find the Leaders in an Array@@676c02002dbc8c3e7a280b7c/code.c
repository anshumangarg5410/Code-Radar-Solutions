#include<stdio.h>
#include<stdlib.h>

int leadercheck(int ar[], int size, int target){
    int condition = 1;
    for(int i = target; i<size; i++){
        if (myarray[target] >= myarray{i}) condition = 1;
        else {
            return 0;
        }
    }
    return condition;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    for(int i =0; i<a; i++){
        if (i == a-1) printf("%d", myarray[i]);
        else {
            if(leadercheck(myarray, a, i)) printf("%d ", myarray[i]);
        }
    }
}