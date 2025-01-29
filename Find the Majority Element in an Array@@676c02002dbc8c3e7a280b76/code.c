#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    int *countaray = (int *)malloc((a) * sizeof(int));
    int maxcount = 0;
    int maxele = 0;
    int specnt;
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    for (int i =0; i<a; i++){
        countaray[i] = 1;
    }
    for (int i = 0; i<a; i++){
        specnt = 0;
        for (int j =0; j<a; j++){
            if (myarray[i] == myarray[j]) specnt++;
        }
        countaray[i] = specnt;
        if (specnt > maxcount) {
            maxcount = specnt;
            maxele = myarray[i];
        }
    }
    int condition = 0;
    for (int i =0; i<a; i++){
        if (countaray[i] == 1){
            condition = 0;
        }
        else {
            condition = 1;
            break;
        }
    }
    if (condition) printf("%d", maxele);
    else printf("%d", -1);
}
