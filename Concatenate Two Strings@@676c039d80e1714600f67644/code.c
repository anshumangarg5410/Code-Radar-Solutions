#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char first[100],second[100];
    scanf("%d", first);
    scanf("%d", second);
    strcat(first, second);
    printf("%s", first);
}