#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void shifting(char mystr[], int strt){
    int len = strlen(mystr);
    for(int i =strt; i<len; i++){
        mystr[i] = mystr[i+1];
        if (i == len-1) mystr[i] = ' ';
    }
}

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    int i = 0;
    while (i < strlen(mystr)) {
        if (mystr[i] == ' ') {
            shifting(mystr, i); 
        } else {
            i++; 
        }
    }
    printf("%s", mystr);
}