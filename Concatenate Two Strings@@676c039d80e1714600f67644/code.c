#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char first[100],second[100];
    fgets(first, 100, stdin);
    getchar();
    fgets(second, 100, stdin);
    strcat(first, second);
    printf("%s", first);
}