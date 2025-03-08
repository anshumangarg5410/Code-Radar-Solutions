#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    for(int i = 0; i<strlen(mystr);i++){
        if (mystr[i] == ' ') mystr[i] = 0;
    }
    printf("%s", mystr);
}