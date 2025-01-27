
#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int condition = 1;
    for (int i=0; i<a-1; i++){
        if(myarray[i] > myarray[i+1]){
            condition = 0;
            // printf("Break: %d and %d; ", myarray[i], myarray[i+1]);
            break;
        }
        // else printf("condition 1 at %d and %d; ", myarray[i], myarray[i+1]);
    }
    if (condition){
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
    return 0;

}