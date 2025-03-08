#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    for (int i =0; i<strlen(mystr); i++){
        mystr[i] = toupper(mystr[i]);
    }
    printf("%s", mystr);
}