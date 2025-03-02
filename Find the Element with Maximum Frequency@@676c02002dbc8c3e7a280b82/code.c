#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i = 0; i<a; i++){
        scanf("%d", &myarray);
    }
    int count = 0; int ele; int maxcount = 0;
    int j = 0;
    for (int i =0; i<=a; i++){
        if (myarray[j] == myarray[i]) count ++;
        if (i == a-1) {
            if (count > maxcount) {
                maxcount = count;
                ele = myarray[j];
            }
            else if (count == maxcount) {
                if (ele > myarray[j]) ele = myarray[j];
            }
            i = 0;
            j++;
        }
        if (j == a-1) break;
    }
    printf("%d", ele);
}