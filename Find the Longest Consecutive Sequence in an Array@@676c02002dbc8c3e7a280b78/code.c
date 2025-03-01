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
    for (int i =0; i<a; i++){
        if (j == a) break;
        if (tarele== myarray[i] && i!=j){
            printf("tarele = myarray[%d] and tarele = %d, if statement (j = %d)\n", i, tarele, j);
            count++;
            tarele++;
            if (count > finalcount) finalcount = count;
            if (i == a-1) {
                i = 0;
                j++;
            }
            printf("\n% count : d , finalfount = %d , j = %d tarele = %d if statement \n", count, finalcount, j, tarele);

        }
        else {
            printf("tarele != myarray[%d], else statement\n", i);
            if (i == a-1) {
                printf("i = a-1\n");
                i = 0;
                j++;
                tarele = myarray[j];
            }

        }

    }
    
    if (finalcount > 0 )printf("%d", finalcount);
    else printf("%d", 1);

}