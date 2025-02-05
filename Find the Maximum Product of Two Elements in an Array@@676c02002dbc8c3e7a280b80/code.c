
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc((a) * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    // {1,2,3,4,5}
    int max = 0;
    for(int i =0; i<a; i++){
        for(int j =i+1; j<a; j++){
            if ((myarray[i] * myarray[j]) >= max) max = myarray[i] * myarray[j];
        }
    }
    printf("%d", max);
}