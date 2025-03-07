#include<stdio.h>
void checkMSB(int n){
    if (n &(1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    checkMSB(n);
    return 0;
}