
#include<stdio.h>
#include<stdlib.h>

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
    int condition= 1;
    for (int j=0; j<a; j++){
        printf("%d", myarray[j]);
    }
    for (int i =0; i<a; i++){
        if (myarray[i] == 0){
            condition = 0;
        }
        else {
            condition = 1;
            break;
        }
    }
    for (int j = 0; j<a; j++){
        printf("%d", myarray[j]);
    }
    printf("condition : %d;  ", condition);
    if (condition == 1) printf("%d", secondlarg);
    else printf("%d", -1);
}