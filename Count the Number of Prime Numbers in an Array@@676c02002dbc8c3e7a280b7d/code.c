#include<stdio.h>
#include<stdlib.h>

int primechecker(int ele){
    if (ele == 0 || ele == 1) return 0;
    for (int i = 2; i<=ele/2; i++){
        if (ele %i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    for (int i=0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int count = 0;
    for(int i=0; i<a; i++){
        if (primechecker(myarray[i])) count++;
    }
    printf("%d", count);
}