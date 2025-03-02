#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i = 0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int diff = INT_MAX; int ele1; int ele2; int j = 0;
    for(int i =j; i<=a; i++){
        printf("i: %d; j: %d\n", i, j);
        if ((abs(myarray[j] - myarray[i]) < diff)) {
            ele1 = myarray[j]; ele2 = myarray[i]; diff = abs(myarray[j] - myarray[i]);
        }
        if (i = a-1) {
            i = j-1;
            j++;
        }
        if (j == a-1) break;
    }

    if (ele1 > ele2) printf("%d %d", ele2, ele1);
    else printf("%d %d", ele1, ele2);

}