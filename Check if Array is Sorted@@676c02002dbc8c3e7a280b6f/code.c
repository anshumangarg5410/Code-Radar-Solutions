#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d ", &a);
    }
    int condition = 1;
    for (int i=0; i<a; i++){
        if (myarray[i+1]){
            if(myarray[i] > myarray[i+1]){
                condition = 0;
                break;
            }
        }
    }
    if (condition){
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
    return 0;

}