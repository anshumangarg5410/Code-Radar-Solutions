#include<stdio.h>
#include<stdlib.h>

int max_ele(int myarray[],int a){
    int maxx = -999999;
    for(int i =0; i<a; i++){
        if (myarray[i] >= maxx){
            maxx = myarray[i];
        }
    }
    return maxx;
}


int main(){
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a)*(sizeof(int)));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int maxele = max_ele(myarray, a);
    for(int i=0; i<a; i++){
        if(myarray[i] == maxele){
            myarray[i] = 0;

        }
    }
    int secondlarg = max_ele(myarray, a);
    printf("%d", secondlarg);
}


