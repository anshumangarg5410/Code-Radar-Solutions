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
        if (i == a-1 && j != a-1) {
            if (counttemp > countfinal) {
                countfinal = counttemp;
                target = j;
            }
            counttemp = 0;
            i = 0;
            j++;
            printf("c %d c; ", counttemp);
        }
        
    }

    // j=0; counttemp = 0;
    // for (int i =0; i<a; i++){
    //     if (myarray[i == myarray[j]]{
    //         counttemp++;
    //     })
    //     if (i == a-1 && j != a-1){
    //         if (counttemp == countfinal){
    //             printf("-1");
    //             return 0;
    //         }

    //     }
    // }
    printf("%d", myarray[target]);
}