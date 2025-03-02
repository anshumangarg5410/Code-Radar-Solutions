#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i = 0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int count = 0; int ele; int maxcount = 0;
    int j = 0;
    for (int i =0; i<=a; i++){
        if (myarray[j] == myarray[i]) count ++;
        if (i == a-1) {
            printf("j: %d; i: %d; count: %d; element: %d\n", j, i, count, ele);
            if (count > maxcount) {
                maxcount = count;
                ele = myarray[j];
                count = 0;
            }
            else if (count == maxcount) {
                if (ele > myarray[j]) ele = myarray[j];
                count = 0;
            }
            i = 0;
            j++;
        }
        if (j == a-1) break;
    }
    printf("%d", ele);
}