#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *mystr = malloc(100 * sizeof(char));
    fgets(mystr, 100, stdin);
    mystr = realloc(mystr, strlen(mystr));
    printf("%d", strlen(mystr));
}