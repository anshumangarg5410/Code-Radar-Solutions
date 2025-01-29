#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    int maxcount = 0;
    int maxele = 0;
    int specnt;
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    for (int i = 0; i<a; i++){
        specnt = 0;
        for (int j =0; j<a; j++){
            if (myarray[i] == myarray[j]) specnt++;
        }
        if (specnt > maxcount) {
            maxcount = specnt;
            maxele = myarray[i];
        }
    }
    if (maxcount == 1) printf("%d", -1);
    else printf("%d", maxele);

}