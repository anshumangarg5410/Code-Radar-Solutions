#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    int words = 0;
    char *word = strtok(mystr, "\n");
    while (word != NULL){
        words++;
        token = strtok(NULL, "\n");
    }
    printf("%d", words);
}