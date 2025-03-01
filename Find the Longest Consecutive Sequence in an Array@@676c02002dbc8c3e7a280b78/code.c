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
            printf("IN MAIN IF: Targele: %d, i: %d, j: %d\n", tarele, i, j);
            count++;
            tarele++;
            if (count > finalcount) finalcount = count;
            if (i == a) {
                i = 0;
            }

        }
        else {
            printf("Else state: tarele: %d, i: %d, j: %d\n", tarele, i, j);
            if (i == a) {
                printf("i = a-1\n");
                i = 0;
                j++;
                count = 0;
                tarele = myarray[j]+1;
            }

        }

    }
    
    if (finalcount > 0 )printf("%d", finalcount);
    else printf("%d", 1);

}