#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void caesarCipher(char message[], int shift, char result[]){
    int len = strlen(message);
    strcpy(result, message);
    for(int i = 0; i<len; i++){
        if (isalpha(result[i])) {
            result[i] = result[i] + shift;
        }
    }
}