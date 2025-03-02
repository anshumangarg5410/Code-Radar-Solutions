#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    for (int j =0; j<a; j++){
        if (((j == 0) && (myarray[j+1] < myarray[j])) || ((j == a-1) && (myarray[j] > myarray[j-1]))) printf("%d ", myarray[j]);
        if (j != 0 || j != a-1) {
            if (myarray[j] > myarray[j-1] && myarray[j] > myarray[j+1]) printf("%d ", myarray[j]);
        }
    }
}