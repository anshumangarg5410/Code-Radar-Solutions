#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void shifting(char mystr[], int len, int strt){
    for(int i =strt; i<len; i++){
        mystr[i] = mystr[i+1];
        if (i == len-1) mystr[i] = ' ';
    }
}

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    for(int i = 0; i<strlen(mystr);i++){
        if (mystr[i] == ' ') {
            shifting(mystr, strlen(mystr), i);
        };
    }
    printf("%s", mystr);
}