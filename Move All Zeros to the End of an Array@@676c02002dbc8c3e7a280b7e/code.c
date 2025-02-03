
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc((a) * sizeof(int));
    int *newarray = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int backcount = a-1;
    int frontcount = 0;
    for (int i =0; i<a; i++){
        if (myarray[i] == 0) {
            newarray[backcount] = 0;
            backcount--;
        }
        else {
            newarray[frontcount] = myarray[i];
            frontcount++;
        }
    }
    for(int i =0; i<a; i++){
        printf("%d", newarray[i]);
    }
    free(myarray);
    free(newarray);

}