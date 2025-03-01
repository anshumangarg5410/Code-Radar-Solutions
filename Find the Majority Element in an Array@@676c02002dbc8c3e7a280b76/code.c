#include<stdio.h>
#include<stdlib.h>
#include<limit.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int j =0;
    int counttemp = 0; int target = 0; int countfinal = 0;
    for (int i =0; i<a; i++){
        if (myarray[i] == myarray[j] && i!=j){
            counttemp++; 
        }
        if (i == a-1 && j != a-1) {
            if (counttemp > countfinal) {
                countfinal = counttemp;
                target = j;
            }
            i = 0;
        }
        j++;
    }
    printf("%d", myarray[target]);
}