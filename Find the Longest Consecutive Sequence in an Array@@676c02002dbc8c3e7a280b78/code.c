#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int count = 1; int j =0; int tarele = myarray[j]+1; int finalcount = 0;
    for (int i =0; i<=a; i++){
        if (j == a) break;
        if (tarele== myarray[i] && i!=j){
            // printf("IN MAIN IF: Targele: %d, i: %d, j: %d, count: %d\n", tarele, i, j, count);
            count++;
            tarele++;
            if (count > finalcount) finalcount = count;
            i=-1;

        }
        else {
            // printf("Else state: tarele: %d, i: %d, j: %d\n", tarele, i, j);
            if (i == a) {
                printf("i = a\n");
                i = -1;
                j++;
                count = 1;
                tarele = myarray[j]+1;
            }

        }

    }
    
    if (finalcount > 0 )printf("%d", finalcount);
    else printf("%d", 1);

}