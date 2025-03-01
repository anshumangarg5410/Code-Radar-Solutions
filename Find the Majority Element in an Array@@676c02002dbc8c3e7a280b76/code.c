#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int j =0;
    int counttemp = 0; int target = 0; int countfinal = 0;
    for (int i =0; i<a; i++){
        if (myarray[i] == myarray[j]){
            counttemp++; 
        }
        if (i == a-1 && j != a) {
            if (counttemp > countfinal) {
                countfinal = counttemp;
                target = j;
            }
            counttemp = 0;
            i = 0;
            j++;
        }
        
    }

    j=0; counttemp = 0;
    for (int i =0; i<a; i++){
        if (myarray[i == myarray[j]]{
            counttemp++;
        })
        if (i == a-1 && j != a){
            if (counttemp == countfinal && j != target){
                printf("-1");
                return 0;
            }
            counttemp = 0;
            i = 0;
            j++;
        }
    }
    printf("%d", myarray[target]);
}