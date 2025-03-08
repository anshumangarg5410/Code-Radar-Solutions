#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    char mystr[100]; char target[100];
    fgets(mystr, 100, stdin);
    scanf(" %s", target);
    char *ans = strstr(mystr, target);
    printf("%p", ans - str);

}