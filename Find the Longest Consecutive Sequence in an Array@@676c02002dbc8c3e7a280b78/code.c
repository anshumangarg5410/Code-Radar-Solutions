#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int count = 1; int j =0; int tarele = myarray[j] + 1; int finalcount = 0;
    for (int i =0; i<a; i++){
        if (j == a) break;
        if (tarele == myarray[i]){
            count++;
            tarele++;
            if (count > finalcount) finalcount = count;
            if (i == a-1) {
                i = 0;
                j++;
            }

        }
        else {
            j++;
            i = 0;
        }

    }
    if (finalcount > 0) printf("%d", finalcount);
    else printf("-1");

}