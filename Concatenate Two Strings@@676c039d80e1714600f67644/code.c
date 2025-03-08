#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char first[100],second[100];
    fgets(first, 100, stdin);
    fgets(second, 100, stdin);
    char final[100] = first + second;
    printf("%s", final);
}