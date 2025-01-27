#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a+1) * sizeof(int));
    for (int i = 0; i<a+1; i++){
        scanf("%d", &myarray[i]);
    }
    int condition = 0;
    int result;
    for (int i =1; i<a;i++){
        if (myarray[i] > myarray[i-1] && myarray[i] > myarray[i+1]){
            condition = 1;
            result = myarray[i];
            break;
        }
    }
    if (condition){
        printf("%d", result);
    }
    else printf("%d", -1);
}