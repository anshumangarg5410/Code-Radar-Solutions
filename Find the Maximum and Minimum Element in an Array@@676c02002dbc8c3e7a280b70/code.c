#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int max,min;
    max = myarray[0];
    min = myarray[0];
    for (int i =0; i<a; i++){
        if(myarray[i] >= max) max = myarray[i];
        if(myarray[i] <= min) min = myarray[i];
        }
    printf("%d %d", min, max);
    return 0;
}