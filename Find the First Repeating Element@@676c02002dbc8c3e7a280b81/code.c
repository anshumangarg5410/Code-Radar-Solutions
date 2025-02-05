
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int result;
    int condition = 0;
    for (int i =0; i<a; i++){
        for(int j=i+1; j<a; j++){
            if (myarray[i] == myarray[j]){
                result = myarray[i];
                condition = 1;
                break;
            }
            if (condition) break;
        }
        if (condition) break;
    }
    printf("%d", result);
}