#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int unique(char myar[], int a, int target){
    int count = 0;
    for(int i = 0;i<a; i++){
        if (myar[i] == target) count++;
    }
    if (count == 1) return 1;
    else return 0;
}

int main(){
    char myar[100];
    fgets(myar, 100, stdin);
    myar[strcspn(myar, "\n")] = '\0';
    int len = strlen(myar);
    for(int i =0; i<len; i++){
        if (unique(myar, len, myar[i])){
            printf("%c", myar[i]);
            return 0;
        }
    }
    printf("-");
}