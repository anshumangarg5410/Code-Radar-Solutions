#include<stdio.h>
#include<stdlib.h>

int reverse(int myarray[], int size){
    for (int i =0; i<size/2; i++){
        int temp = myarray[i];
        myarray[i] = myarray[size-1-i];
        myarray[size-1-i] = temp;
    }
    return 0;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    int *copiedarray = (int *)malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        int temp;
        scanf("%d", &temp);
        myarray[i] = temp;
        copiedarray[i] = temp;
    }
    reverse(copiedarray, a);
    int condition = 1;
    for (int i =0; i<a; i++){
        if (myarray[i] != copiedarray[i]){
            printf("NO");
            condition = 0;
            break;
        }
    }
    if (condition) printf("YES");

    return 0;
}   