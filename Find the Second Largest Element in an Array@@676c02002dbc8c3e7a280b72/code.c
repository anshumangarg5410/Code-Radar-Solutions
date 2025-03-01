
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
    if (a == 2) {
        printf("-1");
        return 0;
    }
    scanf("%d", &a);
    int *myarray = (int *)malloc((a)*(sizeof(int)));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int maxele = max_ele(myarray, a);
    int status = 0;
    for(int i=0; i<a; i++){
        if(myarray[i] == maxele){
            if (status == 1) {
                printf("-1");
                return 0;
            };
            myarray[i] = INT_MIN;
            status = 1;
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
