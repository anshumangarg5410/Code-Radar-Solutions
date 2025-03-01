
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int max_ele(int myarray[],int a){
    int maxx = INT_MIN;
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
            myarray[i] = INT_MIN;
        }
    }
    int secondlarg = max_ele(myarray, a);
    int condition= 0;
    for (int i =0; i<a; i++){
        if (myarray[i] == 0){
            condition = 0;
        }
        else {
            condition = 1;
            break;
        }
    }
    if (condition == 1) printf("%d", secondlarg);
    else printf("%d", -1);
}
