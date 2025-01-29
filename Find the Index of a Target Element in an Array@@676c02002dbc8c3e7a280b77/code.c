#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((n) * sizeof(int));
    for (int i=0; i<a;i++){
        scanf("%d",&myarray[i]);
    }
    int target;
    scanf("%d", &target);
    int result = -1;
    for (int j =0; j<a; j++){
        if (myarray[j] == target){
            result = i;
        }
    }
    printf("%d", result);
    return 0;
}