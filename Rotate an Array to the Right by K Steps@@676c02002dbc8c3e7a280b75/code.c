#include<stdio.h> 
#include<stdlib.h>

int rotatearray(int myarray[],int a){
    int tempfirst = myarray[a-1];
    for (int i =a-1; i>=0; i--){
        //midele
        if (i == 0){
            myarray[i] = tempfirst;
        }
        else {
            myarray[i] = myarray[i-1];
        }

    }
    return 0;
}

int main(){
    int a, val;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    scanf("%d", &val);
    for (int i=0; i<val; i++){
        rotatearray(myarray, a);
    }
    for (int j =0; j<a; j++){
        printf("%d ", myarray[j]);
    }

}